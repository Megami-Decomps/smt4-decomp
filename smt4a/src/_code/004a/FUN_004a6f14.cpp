#include "common.h"
class OperationObject {
public:
    virtual void operation0();
    virtual void operation1();
    virtual void operation2();
    virtual void operation3();
};
extern "C" {
extern OperationObject **DAT_0057f0a0;
/* Invokes operation 3 and reports success. */
int FUN_004a6f14() {
    (*DAT_0057f0a0)->operation3();
    return 0;
}
}
