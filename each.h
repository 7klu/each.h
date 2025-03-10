/* * * * * * * * * * * * * * * * *
  /\_/\
 ( o.o ) each.h | 2025
  > ^ <  github.com/7klu/each.h
* * * * * * * * * * * * * * * * */

#ifndef EACH_H
#define EACH_H

#include <stddef.h> // size_t

/*
 * Example usage:
 *
 * #include <stdio.h>
 * #include <each.h> // or "each.h"
 *
 * void testfunc(void *element)
 * {
 *     int *arr = (int *)element;
 *     printf("%d, ", *arr);
 * }
 *
 * void how(void)
 * {
 *     int array[5] = {1, 2, 3, 4, 5};
 *     foreach(array, arrsize(array), testfunc);
 * }
 */

/*
 * The `foreach` macro takes an array, its size, and a function to apply to each element.
 * The `arrsize` macro computes the size of a static array at compile-time.
 * ⚠️ arrsize does not work with dynamically allocated arrays (malloc)
 */

#define foreach(array, size, function)          \
    do                                          \
    {                                           \
        if (array != NULL)                      \
        {                                       \
            for (size_t i = 0; i < (size); i++) \
            {                                   \
                function(&(array[i]));          \
            }                                   \
        }                                       \
    } while (0)

#define arrsize(array) (sizeof(array) / sizeof((array)[0]))

#endif
