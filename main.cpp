#include <iostream>
#include "functions.h"

int main()
{
    bool test = IsKPeriodic("abcabcabc", 3);     // true, кратно 3
    bool test1 = IsKPeriodic("abcabcabc", 4);    // false, длина строки не кратна 4
    bool test2 = IsKPeriodic("abcabcabcaaa", 3); // false, длина строки кратна 3, но не кратны символы
    bool test3 = IsKPeriodic("abcdabcabc", 3);   // false, не кратная строка
    bool test4 = IsKPeriodic("abcdddabcabc", 3); // false длина строки кратна 3, но не кратны символы
    bool test5 = IsKPeriodic("nfye,6hcg7", 10);  // true, строка кратна сама себе
    bool test6 = IsKPeriodic("abcabcabc", 0);    // false, k < 1
    bool test7 = IsKPeriodic(std::string(), 1);  // false, пустая строка
    return 0;
}