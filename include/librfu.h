#include "main.h"

enum
{
    RFU_RESET = 0x10,
    RFU_LINK_STATUS,
    RFU_VERSION_STATUS,
    RFU_SYSTEM_STATUS,
    RFU_SLOT_STATUS,
    RFU_CONFIG_STATUS,
    RFU_GAME_CONFIG,
    RFU_SYSTEM_CONFIG,
    RFU_UNK18,
    RFU_SC_START,
    RFU_SC_POLLING,
    RFU_SC_END,
    RFU_SP_START,
    RFU_SP_POLLING,
    RFU_SP_END,
    RFU_CP_START,
    RFU_CP_POLLING,
    RFU_CP_END,
    RFU_UNK22,
    RFU_UNK23,
    RFU_DATA_TX,
    RFU_DATA_TX_AND_CHANGE,
    RFU_DATA_RX,
    RFU_MS_CHANGE,
    RFU_DATA_READY_AND_CHANGE,
    RFU_DISCONNECTED_AND_CHANGE,
    RFU_UNK2A,
    RFU_UNK2B,
    RFU_UNK2C,
    RFU_UNK2D,
    RFU_UNK2E,
    RFU_UNK2F,
    RFU_DISCONNECT,
    RFU_TEST_MODE,
    RFU_CPR_START,
    RFU_CPR_POLLING,
    RFU_CPR_END,
    RFU_UNK35,
    RFU_UNK36,
    RFU_RESUME_RETRANSMIT_AND_CHANGE,
    RFU_UNK38,
    RFU_UNK39,
    RFU_UNK3A,
    RFU_UNK3B,
    RFU_UNK3C,
    RFU_STOP_MODE, //3D
};

struct RfuPacket8
{
    u8 data[0x74];
};

struct RfuPacket32
{
    u32 command;
    u32 data[0x1C];
};

union RfuPacket
{
    struct RfuPacket32 rfuPacket32;
    struct RfuPacket8 rfuPacket8;
};

struct RfuStruct
{
    vs32 unk_0;
    u8 txParams;
    u8 unk_5;
    u8 activeCommand;
    u8 unk_7;
    u8 unk_8;
    u8 unk_9;
    u8 timerSelect;
    u8 unk_b;
    int timerState;
    vu8 timerActive;
    u8 unk_11;
    vu16 unk_12;
    vu8 msMode;
    u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    void (*callbackM)();
    void (*callbackS)();
    u32 callbackID;
    union RfuPacket *txPacket;
    union RfuPacket *rxPacket;
    vu8 unk_2c;
    u8 padding[3];
};

struct RfuIntrStruct
{
    u8 rxPacketAlloc[0x74];
    u8 txPacketAlloc[0x74];
    u8 block1[0x960];
    u8 block2[0x30];
};

struct RfuUnk1
{
    u8 unk_0[0x14];
    u32 unk_14;
    u32 unk_18;
    struct RfuIntrStruct unk_1c;
};

struct RfuUnk2
{
    u8 unk_0[0x68];
    u32 unk_68;
    u32 unk_6c;
    u8 unk_70[0x70];
};

struct RfuUnk3
{
    u32 unk_0;
    u32 unk_4;
    u8 unk_8[0xD4];
    u32 unk_dc;
};

struct RfuUnk5
{
    u8 unk_00;
};

extern struct RfuStruct *gRfuState;

extern struct RfuUnk5 *gUnknown_03007890;
extern u32 *gUnknown_03007894;
extern struct RfuUnk3* gUnknown_03007898;
extern struct RfuUnk2* gUnknown_03007880[4];
extern struct RfuUnk1* gUnknown_03007870[4];
extern void* sub_82E53F4;
extern void rfu_STC_clearAPIVariables(void);

void STWI_init_all(struct RfuIntrStruct *interruptStruct, IntrFunc *interrupt, bool8 copyInterruptToRam);
void rfu_REQ_stopMode(void);
void rfu_waitREQComplete(void);
u32 rfu_REQBN_softReset_and_checkID(void);
void rfu_REQ_sendData(u8);
void rfu_setMSCCallback(void (*func)(u16));
void rfu_setREQCallback(void (*func)(u16, u16));
