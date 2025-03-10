# `📜` each.h

> [!NOTE]
> **Add** a **foreach loop** implementation for iterating over arrays in **C** and **C++**.

```c
#include <stdio.h>
#include <each.h> // or "each.h"

void testfunc(void *element)
{
    int *arr = (int *)element;
    printf("%d, ", *arr);
}

void how(void)
{
    int array[5] = {1, 2, 3, 4, 5};
    foreach(array, eachs(array), testfunc);
}
```

## Installation
Run the following command to install the library:
```bash
sudo make
```
This will copy **each.h** to **/usr/local/include/each.h**.

To install it in a custom directory instead, use:

```bash
sudo make IPATH=<your_directory>
```
