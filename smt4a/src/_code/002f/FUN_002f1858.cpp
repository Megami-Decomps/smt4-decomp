/* NON_MATCHING: member construction does not retain the native constructor-return chain; registry and vtable literals differ. */
#include "shard/W4_Match4_Obj559ecc.h"
#include "classes/Obj55b28c.h"

inline void *operator new(u32, void *storage) { return storage; }

struct QueueTimestamp {
    /* 0x00 */ u32 low;
    /* 0x04 */ u32 high;
};

struct OnlineTaskState {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ OnlineTaskState *next;
    /* 0x08 */ OnlineTaskState *previous;
    /* 0x0c */ u8 unk0c[0x2c];
    /* 0x38 */ u32 unk38;
    /* 0x3c */ u32 unk3c;
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u32 value;
    /* 0x48 */ Obj55aff4 name;
    /* 0x50 */ u8 unk50;
    /* 0x51 */ u8 unk51;
    /* 0x52 */ u16 unk52;
    /* 0x54 */ u32 id;
    /* 0x58 */ u32 unk58;
    /* 0x5c */ u32 unk5c;
    /* 0x60 */ Obj55aff4 first;
    /* 0x68 */ Obj55aff4 second;
};

struct OnlineTaskRegistry {
    /* 0x00 */ OnlineTaskState *head;
    /* 0x04 */ OnlineTaskState *tail;
    /* 0x08 */ OnlineTaskState *end;
    /* 0x0c */ u32 count;
    /* 0x10 */ u8 mutex;
};

extern "C" {
void FUN_00109724(OnlineTaskState *task, const QueueTimestamp *time);
QueueTimestamp onlineTimeGetNow();
u32 wordRefsDiffer_002f2968(OnlineTaskState *const *first, OnlineTaskState *const *second);
extern const u8 DAT_00558bd8[];
extern u32 DAT_005949e4;
extern OnlineTaskRegistry DAT_0062e600;

OnlineTaskState *FUN_002f1858(OnlineTaskState *task, const char *name, u32 value)
{
    task->next = 0;
    task->previous = 0;
    task->unk38 = 0;
    task->unk3c = 0;
    task->vtable = DAT_00558bd8;
    new (&task->name) Obj55aff4(name);
    new (&task->first) Obj55aff4;
    new (&task->second) Obj55aff4;
    QueueTimestamp now = onlineTimeGetNow();
    FUN_00109724(task, &now);
    task->unk50 = 0;
    task->value = value;
    task->unk52 = 0;
    task->unk58 = 0;
    task->unk5c = 0;
    Obj55b28c guard(&DAT_0062e600.mutex);
    if (wordRefsDiffer_002f2968(&DAT_0062e600.head, &DAT_0062e600.end)) {
        DAT_0062e600.tail->next = task;
        task->previous = DAT_0062e600.tail;
    } else {
        DAT_0062e600.head = task;
    }
    ++DAT_0062e600.count;
    DAT_0062e600.tail = task;
    task->id = DAT_005949e4++;
    return task;
}
}
