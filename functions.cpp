#include "functions.h"

void badCharHeuristic(const string &str, const int &size, int badchar[NO_OF_CHARS])
{
    int i;

    for (i = 0; i < NO_OF_CHARS; i++)
        badchar[i] = -1;

    for (i = 0; i < size; i++)
        badchar[(int)str[i]] = i;
}

bool search(const string &str, const string &pat)
{
    int m = pat.size();
    int n = str.size();

    int badchar[NO_OF_CHARS];

    badCharHeuristic(pat, m, badchar);

    int s = 0;
    while (s <= (n - m))
    {
        int j = m - 1;

        while (j >= 0 && pat[j] == str[s + j])
            j--;

        if (j < 0)
        {
            s += (s + m < n) ? m - badchar[str[s + m]] : 1;
        }
        else
        {
            return false;
        }
    }
    return true;
}

bool IsKPeriodic(const std::string &str, const int &k)
{
    // Если k = длине строки значит строка кратна сама себе
    if (str.size() == k)
    {
        return true;
    }
    // проверка допустимых значений
    // строка должна быть не пустой, не меньше k и количество символов должно быть кратным k
    if ((k < 1) || (str.size() < k) || ((str.size() % k) != 0) || str.empty())
    {
        return false;
    }
    // получение подстроки
    std::string pat = str.substr(k);

    return search(str, pat);
}