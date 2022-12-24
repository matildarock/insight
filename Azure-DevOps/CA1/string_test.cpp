#include "string.h"
#include "doctest.h"

// TEST_SUITE("string" * doctest::skip())
// {
//     TEST_CASE("string length")
//     {
//         char buf[100] = "abcdefghijklmno";
//         int len = str_len(buf);
//         CHECK(len == 15);

//         buf[10] = 0;
//         len = str_len(buf);
//         CHECK(len == 10);

//         buf[5] = 0;
//         len = str_len(buf);
//         CHECK(len == 5);
//     }

//     TEST_CASE("string compare")
//     {
//         char pch1[11] = "Best";
//         char pch2[10] = "Best";
//         CHECK(str_compare(pch1, 10, pch2, 11));

//         pch1[5] = 'k';
//         pch2[5] = 'l';
//         CHECK(str_compare(pch1, 10, pch2, 11));

//         pch1[4] = 'a';
//         pch2[4] = 'a';
//         CHECK(!str_compare(pch1, 10, pch2, 11));
//     }

//     TEST_CASE("string append")
//     {
//         char buf[10] = "Corr";
//         char str[5] = "ect";
//         char expected[10] = "Correct";
//         str_append(buf, 10, str);
//         CHECK(str_compare(buf, 10, expected, 10));
//     }

//     TEST_CASE("string copy")
//     {
//         char src_buf[10] = "Exactly";
//         char tgt_buf[10];
//         CHECK(str_copy(src_buf, 10, tgt_buf, 10));
//         CHECK(str_compare(src_buf, 10, tgt_buf, 10));
//     }
// }