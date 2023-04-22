#pragma once
#include <string>
#include <iostream>
using namespace std;
#define NO_OF_CHARS 256

void badCharHeuristic(const string &str, const int &size, int badchar[NO_OF_CHARS]);

/// @brief Поиск подстроки по алгоритму Бойера-Мура. При любом неудачном поиске возвращает false потому-что в кратной строке несовпадений быть не может.
/// @param txt - исходный текст
/// @param pat - искомая подстрока
/// @return
bool search(const string &txt, const string &pat);

/// @brief Проверяет кратность строки делителю
/// @param str - строка
/// @param k - делитель
/// @return
bool IsKPeriodic(const std::string &str, const int &k);