#include "dynamic_memory.h"
#include "doctest.h"

// TEST_SUITE("dyn_memory" * doctest::skip())
// {
//     TEST_CASE("repeat_value")
//     {
//         int value = 5;
//         int count = 10;
//         int *array = repeat_value(value, count);
//         for (int i = 0; i < count; i++)
//             CHECK(array[i] == value);
//         free(array);

//         value = 7;
//         count = 15;
//         array = repeat_value(value, count);
//         for (int i = 0; i < count; i++)
//             CHECK(array[i] == value);
//         free(array);

//         value = -10;
//         count = 100000;
//         array = repeat_value(value, count);
//         for (int i = 0; i < count; i++)
//             CHECK(array[i] == value);
//         free(array);
//     }

//     TEST_CASE("range")
//     {
//         int from = 0;
//         int to = 5;
//         int *array = range(from, to);
//         for (int i = from; i <= to; i++)
//             CHECK(array[i - from] == i);
//         free(array);

//         from = 1;
//         to = 10;
//         array = range(from, to);
//         for (int i = from; i <= to; i++)
//             CHECK(array[i - from] == i);
//         free(array);

//         from = -1;
//         to = 5;
//         array = range(from, to);
//         for (int i = from; i <= to; i++)
//             CHECK(array[i - from] == i);
//         free(array);

//         from = 100000;
//         to = 200000;
//         array = range(from, to);
//         for (int i = from; i <= to; i++)
//             CHECK(array[i - from] == i);
//         free(array);
//     }
// }