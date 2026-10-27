/* NON_MATCHING: the key search now has retail's unpredicated loop (shared findECardParameter); only callee-saved register numbering differs (retail: table r4, index r5, key r8, output r7). */
#include "common.h"
#include "net/ECardParameters.h"
#include <string.h>

extern "C" void rt_memcpy(void *, const void *, u32);

/* Copy the card-type code property, returning an empty fixed-size value if absent. */
extern "C" void FUN_0035474c(char *output, const ECardResponse *response)
{
    char value[64] = {0};
    const char *source = findECardParameter(response->parameters, "sys.ECardTypeCode");
    if (source != NULL) {
        strncpy(value, source, sizeof(value));
    }
    rt_memcpy(output, value, sizeof(value));
}
