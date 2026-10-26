#include "common.h"

struct ProcessNodeView {
    u8 unk00[0x28];               // 0x00
    u32 unk28;                    // 0x28
    u8 unk2C[0x20];               // 0x2C
    ProcessNodeView* next;         // 0x4C
    u8 unk50[0x10];               // 0x50
    u32 unk60;                    // 0x60
    void (*callback)(u32);         // 0x64
    u8 unk68[0x30];               // 0x68
    u8 unk98;                     // 0x98
};

struct ProcessBucketView {
    ProcessNodeView* head;         // 0x00
    u32 unk04;                    // 0x04
};

struct ProcessRegistryView {
    ProcessBucketView* buckets;    // 0x00
    s32 bucketCount;              // 0x04
};

extern "C" {
extern ProcessRegistryView g_asdProcess;
s32 FUN_001696f4(void);
s32 FUN_00167eb0(u32);

// Dispatch callbacks or the default handler for nodes whose state byte is three.
void processDispatchFinishedNodes(void)
{
    if (FUN_001696f4() == 1) {
        for (s32 bucketIndex = 0; bucketIndex < g_asdProcess.bucketCount; ++bucketIndex) {
            for (ProcessNodeView* node = g_asdProcess.buckets[bucketIndex].head;
                 node != 0; node = node->next) {
                if (node->unk98 == 3) {
                    if (node->callback == 0) {
                        FUN_00167eb0(node->unk60);
                    } else {
                        node->callback(node->unk28);
                    }
                }
            }
        }
    }
}
}
