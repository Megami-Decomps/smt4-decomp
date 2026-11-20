#include "common.h"
#include "code/Code002a.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

int aocTextureNodeLoad(u8 *buffer, int b, int c);
int optionalWorkGetValue(void);
int asdTextureEntryApply(int resource);
int asdTextureSelectHeap(int resource, u32 value);
extern int packageFindFileByTypeAndId(u32 a, int b, u32 c, u8 *buffer);
extern int packageKindToRecordKind(u32 id);
extern int asdTMTexTableCallFileB(u32 file, u32 id);

int aocLoadTextureNode(u32 a, u32 file, u32 id, u32 value)
{
    int found;
    int resource;
    u8 buffer[128];

    found = packageKindToRecordKind(file);
    if (found != -1) {
        reinterpret_cast<int>(memClear(reinterpret_cast<void*>(buffer), 0x80));
        found = packageFindFileByTypeAndId(a, found, id, buffer);
        if ((found != 0) && (resource = asdTMTexTableCallFileB(file, id), resource != 0)) {
            optionalWorkGetValue();
            aocTextureNodeLoad(buffer, resource, found);
            asdTextureSelectHeap(resource, value);
            asdTextureEntryApply(resource);
            return resource;
        }
    }
    return 0;
}

} /* extern "C" */
