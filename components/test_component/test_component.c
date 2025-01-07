#include "test_component.h"
#include "stubbed.h"

int add(int a, int b)
{
    const char* data = "test";
    int length = 0;

    int ret = add_analytics(data, length);

    if(ret == -1)
    {
        return -1;
    }

    return a + b;
}