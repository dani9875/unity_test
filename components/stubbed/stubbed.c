#include "stubbed.h"
#include <stdio.h>

int add_analytics(const char* data, int length)
{
    if(data == NULL || length <= 0)
    {
        return -1;
    }

    return 0;
}