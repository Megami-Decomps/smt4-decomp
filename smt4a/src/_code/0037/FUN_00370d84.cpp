/* NON_MATCHING: only the literal pool order and where the g_engineResourceHandles address is loaded differ */
#include "shard/W5_W5Match7_ResourceHandles.h"

/* The partner topic window's state. */
class PartnerTopic {
public:
    PartnerTopic()
    {
        unk020 = 0;
        unk024 = 0;
        unk028 = 0;
        unk02C = 0;
        unk030 = 0;
        unk5E0 = 0;
        unk010 = 0;
    }
    static void *operator new(u32 bytes) throw();

    /* 0x000 */ u32 process;
    /* 0x004 */ u8 unk004[0xC];
    /* 0x010 */ u32 unk010;
    /* 0x014 */ u8 unk014[0xC];
    /* 0x020 */ u32 unk020;
    /* 0x024 */ u32 unk024;
    /* 0x028 */ u32 unk028;
    /* 0x02C */ u32 unk02C;
    /* 0x030 */ u32 unk030;
    /* 0x034 */ u8 unk034[0x5AC];
    /* 0x5E0 */ u32 unk5E0;
    /* 0x5E4 */ u8 unk5E4[0xF4];
};

typedef char PartnerTopicSize[sizeof(PartnerTopic) == 0x6D8 ? 1 : -1];

typedef void (*TopicCallback)(void *);
extern "C" void *asdOperatorNew(u32 size);
void *PartnerTopic::operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }

extern "C" {
void FUN_0035d080(void *);
void engineResourceSetSecondaryValue(void *);
void FUN_0037d994(void *);
u32 asdProcessCreateSimple(const char *name, s32 group, s32 startDelay, s32 endDelay, TopicCallback onUpdate,
                           TopicCallback onEnd, void *work);
void taskCreateDraw(const char *name, s32 group, s32 startDelay, s32 endDelay, TopicCallback onUpdate, void *onEnd,
                    void *work, u32 owner);
void FUN_003f5598(PartnerTopic *topic);

/* Creates the partner topic window: its state, the update process and the three draw tasks. */
void FUN_00370d84(void)
{
    PartnerTopic *topic;
    g_engineResourceHandles.secondary = topic = new PartnerTopic();
    topic->process = asdProcessCreateSimple("PartnerTopic PROC", 4, 0, 0, FUN_0035d080, NULL, NULL);
    taskCreateDraw("PartnerTopic UL", 0x81, 0, 0, engineResourceSetSecondaryValue, NULL, NULL, topic->process);
    taskCreateDraw("PartnerTopic UR", 0xdd, 0, 0, engineResourceSetSecondaryValue, NULL, NULL, topic->process);
    taskCreateDraw("PartnerTopic DD", 0xeb, 0, 0, FUN_0037d994, NULL, NULL, topic->process);
    FUN_003f5598(topic);
}
}
