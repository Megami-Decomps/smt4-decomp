#include "common.h"

extern "C" {

typedef struct Queue {
    /* 0x00 */ s32 write;
    /* 0x04 */ s32 read;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ s32 current;
} Queue;

typedef struct Player {
    /* 0x00 */ u8 unk00[0xA4];
    /* 0xA4 */ s32 current;
    /* 0xA8 */ u8 unkA8[4];
    /* 0xAC */ Queue *queue;
} Player;

void asdModelAdvanceCommandCursor(void);
void FUN_0016d338(Queue *queue, s32 value);
void FUN_0017d43c(void);
void FUN_0017d5f8(void);
s32 FUN_0019eafc(void);

/* When the player has a queue: if the queue holds unread words, picks its current entry and (if there is one) hands it on; then runs FUN_0017d43c. */
void FUN_00157be4(Player *player)
{
    s32 current;
    Queue *queue;

    queue = player->queue;
    if (queue != NULL) {
        if (((queue->write - queue->read) & 0xFFFFFFFCU) != 0) {
            asdModelAdvanceCommandCursor();
            current = queue->current;
            player->current = current;
            if (current != 0) {
                FUN_0017d5f8();
                FUN_0016d338(queue, FUN_0019eafc());
            }
        }
        FUN_0017d43c();
        return;
    }
}

} /* extern "C" */
