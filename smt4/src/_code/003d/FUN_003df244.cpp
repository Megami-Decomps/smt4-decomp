/* NON_MATCHING: stack initialization order and the dictionary search index registers differ from retail. */
#include "gamedata/ItemCodeInfo.h"

extern "C" {
s32 libc_strncmp(const char *left, const char *right, u32 count);
char *strncpy(char *destination, const char *source, u32 count);

// Extract the resource id and its bounded sys.ItemCode property.
void FUN_003df244(ItemCodeInfo *output, ItemPropertyResource **resource)
{
    ItemCodeInfo result = {};
    ItemPropertyResource *properties = *resource;
    result.id = *properties->id;
    const char *code = NULL;
    for (u32 i = 0; i < properties->propertyCount; ++i) {
        if (libc_strncmp(properties->properties[i].key, "sys.ItemCode", 64) == 0) {
            code = properties->properties[i].value;
            break;
        }
    }
    strncpy(result.code, code, sizeof(result.code));
    result.code[31] = '\0';
    *output = result;
}
}
