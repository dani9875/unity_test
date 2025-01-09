#include "test_component.h"
#include "stubbed.h"
#include "mocked.h"

int add(int a, int b)
{
    const char* data = "test";
    int length = 0;

    int ret = add_analytics(data, length);
    int ret_val = gpio_read(1);

    if(ret == -1)
    {
        return -1;
    }

    if(ret_val == -1)
    {
        return -1;
    }

    return a + b;
}