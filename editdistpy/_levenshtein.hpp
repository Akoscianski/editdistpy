#ifndef EDITDISTPY__LEVENSHTEIN_HPP_
#define EDITDISTPY__LEVENSHTEIN_HPP_

#include "def.hpp"

#ifdef __cplusplus
extern "C" {
#endif

int _distance(
    const char* string_1
  , const char* string_2
  , const int len_1
  , const int len_2
  , const int start);

int _distance_max(
    const char* string_1
  , const char* string_2
  , const int len_1
  , const int len_2
  , const int start
  , const int max_distance);

#ifdef __cplusplus
}
#endif

#endif  // EDITDISTPY__LEVENSHTEIN_HPP_
