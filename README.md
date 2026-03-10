# odd_even_h
A lightweight header to check if an integer is odd or even.

## Compatibility

![C90](https://img.shields.io/badge/C-C90-blue)
![C++98](https://img.shields.io/badge/C++-98-blue)

# Examples

## C Example
```c
#include <stdio.h>
#include "odd_even.h"

int main(void) {
    printf("%d\n", is_even(2));
    return 0;
}
```

## C++ Example
```cpp
#include <iostream>
#include "odd_even.h"

int main() {
    std::cout << is_even(2) << std::endl;
    return 0;
}
```

# Performance
It compiled and ran without crashing. What more could you ask for?
