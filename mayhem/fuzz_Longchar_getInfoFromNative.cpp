#include <stdint.h>
#include <stdio.h>
#include <climits>

#include "longchar.h"
#include "FuzzedDataProvider.h"
extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size)
{
    FuzzedDataProvider provider(data, size);
    char32_t* ch = (char32_t*) malloc(sizeof(char32_t));
    provider.ConsumeData(ch, sizeof(char32_t));
    Longchar_getInfoFromNative(*ch);
    free(ch);

    return 0;
}