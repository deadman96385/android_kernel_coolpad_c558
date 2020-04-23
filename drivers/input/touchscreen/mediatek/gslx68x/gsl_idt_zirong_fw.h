// 识别寄存器：B8的值，以做兼容使用
//互容　ID
static const struct fw_data GSL_IDT_FW[] = {
	{0xf0, 0x2},
	{0x00, 0x00000000},
	{0x04, 0x00000000},
	{0x08, 0x00000000},
	{0x0c, 0x00000000},
	{0x10, 0x00000000},
	{0x14, 0x00000000},
	{0x18, 0x00000000},
	{0x1c, 0x00000000},
	{0x20, 0x00000000},
	{0x24, 0x00000000},
	{0x28, 0x00000000},
	{0x2c, 0x00000000},
	{0x30, 0x00000000},
	{0x34, 0x0000ffff},
	{0x38, 0x00000000},
	{0x3c, 0x00000000},
	{0x40, 0x00000000},
	{0x44, 0x00000000},
	{0x48, 0x00000000},
	{0x4c, 0x00000000},
	{0x50, 0x00400040},
	{0x54, 0x00000000},
	{0x58, 0x00000000},
	{0x5c, 0x00000000},
	{0x60, 0x00000000},
	{0x64, 0xf801000e},
	{0x68, 0x04066414},
	{0x6c, 0x1001020c},
	{0x70, 0x00000fff},
	{0x74, 0x00000000},
	{0x78, 0x00000000},
	{0x7c, 0x0c030c03},
	{0xf0, 0x3},
	{0x00, 0x46758ce9},
	{0x04, 0x00000000},
	{0x08, 0x00400000},
	{0x0c, 0x00800000},
	{0x10, 0x40020000},
	{0x14, 0x00000000},
	{0x18, 0x00000000},
	{0x1c, 0x00000000},
	{0x20, 0x00000000},
	{0x24, 0x00005100},
	{0x28, 0x00008e00},
	{0x2c, 0x00000000},
	{0x30, 0x0001005f},
	{0x34, 0x014001e0},
	{0x38, 0x02cb0320},
	{0x3c, 0x00000000},
	{0x40, 0x00010001},
	{0x44, 0x01900190},
	{0x48, 0x03200320},
	{0x4c, 0x00000000},
	{0x50, 0x00000000},
	{0x54, 0x00000000},
	{0x58, 0x00000080},
	{0x5c, 0x00000000},
	{0x60, 0x00000000},
	{0x64, 0x1a0ac00a},
	{0x68, 0x00000002},
	{0x6c, 0x0000000f},
	{0x70, 0x00000000},
	{0x74, 0x00000000},
	{0x78, 0xffffffec},
	{0x7c, 0x00000000},
	{0xf0, 0x4},
	{0x00, 0x00000000},
	{0x04, 0x0001660b},
	{0x08, 0x00000064},
	{0x0c, 0x00000fff},
	{0x10, 0xfe0cff06},
	{0x14, 0x0002000a},
	{0x18, 0x0000012c},
	{0x1c, 0x03030000},
	{0x20, 0x0000012c},
	{0x24, 0x00000000},
	{0x28, 0x80808080},
	{0x2c, 0x00000000},
	{0x30, 0x00001000},
	{0x34, 0x00000000},
	{0x38, 0x00000000},
	{0x3c, 0x00000000},
	{0x40, 0x00007fff},
	{0x44, 0x00400020},
	{0x48, 0x00007fff},
	{0x4c, 0x00400020},
	{0x50, 0x20400000},
	{0x54, 0x20400000},
	{0x58, 0x20400000},
	{0x5c, 0x20400000},
	{0x60, 0x00000010},
	{0x64, 0x00000000},
	{0x68, 0x00000010},
	{0x6c, 0x00000000},
	{0x70, 0x00000010},
	{0x74, 0x00000000},
	{0x78, 0x00000010},
	{0x7c, 0x00000000},
	{0xf0, 0x5},
	{0x00, 0x0000003c},
	{0x04, 0x00000002},
	{0x08, 0x000000c8},
	{0x0c, 0x00000000},
	{0x10, 0x0000000a},
	{0x14, 0x00000000},
	{0x18, 0x00000fff},
	{0x1c, 0x10000000},
	{0x20, 0x10000000},
	{0x24, 0x00000000},
	{0x28, 0x00000000},
	{0x2c, 0x00000400},
	{0x30, 0x12345678},
	{0x34, 0x12345678},
	{0x38, 0x00000000},
	{0x3c, 0x12345678},
	{0x40, 0x0c000c00},
	{0x44, 0x00000014},
	{0x48, 0x12345678},
	{0x4c, 0x00000000},
	{0x50, 0x00000000},
	{0x54, 0x10000040},
	{0x58, 0x00010001},
	{0x5c, 0x00010009},
	{0x60, 0x80808080},
	{0x64, 0x00000000},
	{0x68, 0x00000080},
	{0x6c, 0x00000080},
	{0x70, 0x00000000},
	{0x74, 0x00000220},
	{0x78, 0x00000003},
	{0x7c, 0x0000000c},
	{0xf0, 0x6},
	{0x00, 0x00000010},
	{0x04, 0x00000000},
	{0x08, 0x00000008},
	{0x0c, 0x07030203},
	{0x10, 0x00000032},
	{0x14, 0x01000000},
	{0x18, 0x00000000},
	{0x1c, 0x00000001},
	{0x20, 0x00002904},
	{0x24, 0x000001e0},
	{0x28, 0x00000320},
	{0x2c, 0xf801000e},
	{0x30, 0xf8010008},
	{0x34, 0x0000001f},
	{0x38, 0x00000003},
	{0x3c, 0x00000fff},
	{0x40, 0x80000000},
	{0x44, 0x001f001f},
	{0x48, 0x00000fff},
	{0x4c, 0x05030203},
	{0x50, 0x00000000},
	{0x54, 0x00000000},
	{0x58, 0x00000000},
	{0x5c, 0x00000000},
	{0x60, 0x20100804},
	{0x64, 0x00000000},
	{0x68, 0x00000000},
	{0x6c, 0x00000000},
	{0x70, 0x00000000},
	{0x74, 0x000000c8},
	{0x78, 0x000a003c},
	{0x7c, 0x00000000},
	{0xf0, 0x7},
	{0x00, 0x11102301},
	{0x04, 0x03090208},
	{0x08, 0x050b040a},
	{0x0c, 0x07110610},
	{0x10, 0x09130812},
	{0x14, 0x00123456},
	{0x18, 0x00000000},
	{0x1c, 0x000a0078},
	{0x20, 0x00001081},
	{0x24, 0xff080010},
	{0x28, 0xff080120},
	{0x2c, 0xff080140},
	{0x30, 0xff080160},
	{0x34, 0x00000320},
	{0x38, 0x0000017d},
	{0x3c, 0x00000142},
	{0x40, 0x00000000},
	{0x44, 0x00000000},
	{0x48, 0x40000101},
	{0x4c, 0x320f0f03},
	{0x50, 0x00000000},
	{0x54, 0x00000003},
	{0x58, 0x00040000},
	{0x5c, 0x00090005},
	{0x60, 0x000e000a},
	{0x64, 0x0013000f},
	{0x68, 0x00001000},
	{0x6c, 0x0004003c},
	{0x70, 0x00040000},
	{0x74, 0x00040000},
	{0x78, 0x00012345},
	{0x7c, 0x00012345},
	{0xf0, 0x8},
	{0x00, 0x0d010713},
	{0x04, 0x1903091f},
	{0x08, 0x21141a04},
	{0x0c, 0x0a161c0e},
	{0x10, 0xffffffff},
	{0x14, 0xffffffff},
	{0x18, 0xffffffff},
	{0x1c, 0xffffffff},
	{0x20, 0x0c000612},
	{0x24, 0x1802081e},
	{0x28, 0x20151b05},
	{0x2c, 0x0b171d0f},
	{0x30, 0xffffffff},
	{0x34, 0xffffffff},
	{0x38, 0xffffffff},
	{0x3c, 0xffffffff},
	{0x40, 0x01020304},
	{0x44, 0x05060708},
	{0x48, 0x090a0b0c},
	{0x4c, 0x00000000},
	{0x50, 0x00000000},
	{0x54, 0x00060002},
	{0x58, 0x00000000},
	{0x5c, 0x00000008},
	{0x60, 0x00000000},
	{0x64, 0x00000201},
	{0x68, 0x00000804},
	{0x6c, 0x00000100},
	{0x70, 0x00000073},
	{0x74, 0x000000e7},
	{0x78, 0x00000001},
	{0x7c, 0x0000000c},
	{0xf0, 0x9},
	{0x00, 0xff080078},
	{0x04, 0x00ff0011},
	{0x08, 0xff08007c},
	{0x0c, 0xffc00000},
	{0x10, 0xfffffff0},
	{0x14, 0x00000000},
	{0x18, 0xfffffff0},
	{0x1c, 0x00000000},
	{0x20, 0xfffffff0},
	{0x24, 0x00000000},
	{0x28, 0xfffffff0},
	{0x2c, 0x00000000},
	{0x30, 0xfffffff0},
	{0x34, 0x00000000},
	{0x38, 0xfffffff0},
	{0x3c, 0x00000000},
	{0x40, 0xfffffff0},
	{0x44, 0x00000000},
	{0x48, 0xfffffff0},
	{0x4c, 0x00000000},
	{0x50, 0xfffffff0},
	{0x54, 0x00000000},
	{0x58, 0xfffffff0},
	{0x5c, 0x00000000},
	{0x60, 0xfffffff0},
	{0x64, 0x00000000},
	{0x68, 0xfffffff0},
	{0x6c, 0x00000000},
	{0x70, 0xfffffff0},
	{0x74, 0x00000000},
	{0x78, 0xfffffff0},
	{0x7c, 0x00000000},
	{0xf0, 0x11},
	{0x00, 0x00000000},
	{0x04, 0x00000000},
	{0x08, 0x00000000},
	{0x0c, 0x00000000},
	{0x10, 0x00000000},
	{0x14, 0x00000000},
	{0x18, 0x00000000},
	{0x1c, 0x00000000},
	{0x20, 0x00000000},
	{0x24, 0x00000000},
	{0x28, 0x00000000},
	{0x2c, 0x00000000},
	{0x30, 0x00000000},
	{0x34, 0x00000000},
	{0x38, 0x00000000},
	{0x3c, 0x00000000},
	{0x40, 0x00000000},
	{0x44, 0x00000000},
	{0x48, 0x00000000},
	{0x4c, 0x00000000},
	{0x50, 0x00000000},
	{0x54, 0x00000000},
	{0x58, 0x00000000},
	{0x5c, 0x00000000},
	{0x60, 0x00000000},
	{0x64, 0x00000000},
	{0x68, 0x00000000},
	{0x6c, 0x00000000},
	{0x70, 0x00000000},
	{0x74, 0x00000000},
	{0x78, 0x00000000},
	{0x7c, 0x12345678},
	/*
	{0xf0,0xe0},
	{0x00,0x00000000},
	{0x04,0x00000000},
	{0x08,0x00000000},
	{0x0c,0x00000000},
	{0x10,0x00000000},
	{0x14,0x00000000},
	{0x18,0x00000000},
	{0x1c,0x00000000},
	{0x20,0x00000000},
	{0x24,0x00000000},
	{0x28,0x00000000},
	{0x2c,0x00000000},
	{0x30,0x00000000},
	{0x34,0x00000000},
	{0x38,0x00000000},
	{0x3c,0x00000000},
	{0x40,0x00780226},
	{0x44,0x00780078},
	{0x48,0x01b80078},
	{0x4c,0x007801b8},
	{0x50,0x00780078},
	{0x54,0x014a0078},
	{0x58,0x014a014a},
	{0x5c,0x0050014a},
	{0x60,0x00640000},
	{0x64,0x00640064},
	{0x68,0x0000003c},
	{0x6c,0x005a0000},
	{0x70,0x00000000},
	{0x74,0x00000000},
	{0x78,0x00000000},
	{0x7c,0x00000000},
	*/

	{0xf0, 0x1e},
	{0x00, 0x5a5a0f00},
	{0x04, 0x000020d8},
	{0x08, 0x00002148},
	{0x0c, 0x00002158},
	{0x10, 0x00002160},
	{0x14, 0x00002170},
	{0x18, 0x00002178},
	{0x1c, 0x00002188},
	{0x20, 0x00002190},
	{0x24, 0x00002198},
	{0x28, 0x000021a0},
	{0x2c, 0x000021a8},
	{0x30, 0x000021b0},
	{0x34, 0x000021b8},
	{0x38, 0x000021dc},
	{0x3c, 0x00000000},
	{0x40, 0x00000000},
	{0x44, 0x00000000},
	{0x48, 0x00000000},
	{0x4c, 0x00000000},
	{0x50, 0x00000000},
	{0x54, 0x00000000},
	{0x58, 0x00000000},
	{0x5c, 0x00000000},
	{0x60, 0x00000000},
	{0x64, 0x00000000},
	{0x68, 0x00000000},
	{0x6c, 0x00000000},
	{0x70, 0x00000000},
	{0x74, 0x00000000},
	{0x78, 0x00000000},
	{0x7c, 0x00000000},
	{0xf0, 0x1f},
	{0x00, 0x00000000},
	{0x04, 0x00000000},
	{0x08, 0x00000000},
	{0x0c, 0x00000000},
	{0x10, 0x00000000},
	{0x14, 0x00000000},
	{0x18, 0x00000000},
	{0x1c, 0x00000000},
	{0x20, 0x00000000},
	{0x24, 0x00000000},
	{0x28, 0x00000000},
	{0x2c, 0x00000000},
	{0x30, 0x00000000},
	{0x34, 0x00000000},
	{0x38, 0x00000000},
	{0x3c, 0x00000000},
	{0x40, 0x00000000},
	{0x44, 0x00000000},
	{0x48, 0x00000000},
	{0x4c, 0x00000000},
	{0x50, 0x00000000},
	{0x54, 0x00000000},
	{0x58, 0x00000000},
	{0x5c, 0x000020c8},
	{0x60, 0x00000000},
	{0x64, 0x00000000},
	{0x68, 0x00000000},
	{0x6c, 0x00000000},
	{0x70, 0x00000000},
	{0x74, 0x000020d0},
	{0x78, 0x000021e4},
	{0x7c, 0x5a5a0ffc},
	{0xf0, 0x0},
	{0x00, 0x01000000},
	{0x04, 0x01000000},
	{0x08, 0x01000000},
	{0x0c, 0x233fc0c0},
	{0x10, 0xa2146004},
	{0x14, 0xa4102000},
	{0x18, 0xe4244000},
	{0x1c, 0x233fc0c0},
	{0x20, 0xa2146010},
	{0x24, 0x2500003f},
	{0x28, 0xa414a3ff},
	{0x2c, 0xe4244000},
	{0x30, 0x01000000},
	{0x34, 0x821020e0},
	{0x38, 0x81880001},
	{0x3c, 0x01000000},
	{0x40, 0x01000000},
	{0x44, 0xa410200f},
	{0x48, 0xe4a00040},
	{0x4c, 0x01000000},
	{0x50, 0xa0100000},
	{0x54, 0xa2100000},
	{0x58, 0xa4100000},
	{0x5c, 0xa6100000},
	{0x60, 0xa8100000},
	{0x64, 0xaa100000},
	{0x68, 0xac100000},
	{0x6c, 0xae100000},
	{0x70, 0x90100000},
	{0x74, 0x92100000},
	{0x78, 0x94100000},
	{0x7c, 0x96100000},
	{0xf0, 0x1},
	{0x00, 0x98100000},
	{0x04, 0x9a100000},
	{0x08, 0x9c100000},
	{0x0c, 0x9e100000},
	{0x10, 0x84100000},
	{0x14, 0x01000000},
	{0x18, 0x01000000},
	{0x1c, 0x82100000},
	{0x20, 0x81900001},
	{0x24, 0x82100000},
	{0x28, 0x81980001},
	{0x2c, 0x81800000},
	{0x30, 0x01000000},
	{0x34, 0x01000000},
	{0x38, 0x01000000},
	{0x3c, 0xbc102cfc},
	{0x40, 0x9c102cf8},
	{0x44, 0x01000000},
	{0x48, 0x01000000},
	{0x4c, 0x27001040},
	{0x50, 0xa614e00f},
	{0x54, 0xe6a00040},
	{0x58, 0x01000000},
	{0x5c, 0x40000309},
	{0x60, 0x01000000},
	{0x64, 0x01000000},
	{0x68, 0x10bfffff},
	{0x6c, 0x01000000},
	{0x70, 0x03169684},
	{0x74, 0x82106053},
	{0x78, 0x03296948},
	{0x7c, 0x82106133},
	{0xf0, 0x1a},
	{0x00, 0x9de3bf98},
	{0x04, 0x40000010},
	{0x08, 0x01000000},
	{0x0c, 0x40000007},
	{0x10, 0x01000000},
	{0x14, 0x40000303},
	{0x18, 0x01000000},
	{0x1c, 0x40000015},
	{0x20, 0x01000000},
	{0x24, 0x30bffffe},
	{0x28, 0x82102001},
	{0x2c, 0x81904000},
	{0x30, 0x01000000},
	{0x34, 0x01000000},
	{0x38, 0x01000000},
	{0x3c, 0x81c3e008},
	{0x40, 0x01000000},
	{0x44, 0x03000008},
	{0x48, 0x82106342},
	{0x4c, 0xa3804000},
	{0x50, 0x03000004},
	{0x54, 0x82106000},
	{0x58, 0x81984000},
	{0x5c, 0x01000000},
	{0x60, 0x01000000},
	{0x64, 0x01000000},
	{0x68, 0x81c3e008},
	{0x6c, 0x01000000},
	{0x70, 0x01000000},
	{0x74, 0x01000000},
	{0x78, 0x01000000},
	{0x7c, 0xa7800000},
	{0xf0, 0x1b},
	{0x00, 0x01000000},
	{0x04, 0x01000000},
	{0x08, 0x01000000},
	{0x0c, 0x81c3e008},
	{0x10, 0x01000000},
	{0x14, 0x80a22000},
	{0x18, 0x02800006},
	{0x1c, 0x01000000},
	{0x20, 0x01000000},
	{0x24, 0x90823fff},
	{0x28, 0x12bffffe},
	{0x2c, 0x01000000},
	{0x30, 0x81c3e008},
	{0x34, 0x01000000},
	{0x38, 0x01000000},
	{0x3c, 0x05001040},
	{0x40, 0x8410a00f},
	{0x44, 0xc4a00040},
	{0x48, 0x01000000},
	{0x4c, 0x81c3e008},
	{0x50, 0x01000000},
	{0x54, 0x9de3bef8},
	{0x58, 0xb2067fff},
	{0x5c, 0x96100018},
	{0x60, 0xf227bf5c},
	{0x64, 0xc027bf58},
	{0x68, 0x98102000},
	{0x6c, 0xb007bff8},
	{0x70, 0xd4063f60},
	{0x74, 0xda063f64},
	{0x78, 0xb810000a},
	{0x7c, 0x98033fff},
	{0xf0, 0x1c},
	{0x00, 0xb0063ff8},
	{0x04, 0x80a2800d},
	{0x08, 0x16800031},
	{0x0c, 0xb610000d},
	{0x10, 0xbb2aa002},
	{0x14, 0x832b6002},
	{0x18, 0xb207400b},
	{0x1c, 0xb400400b},
	{0x20, 0xde02c01d},
	{0x24, 0x80a7001b},
	{0x28, 0x1680001c},
	{0x2c, 0x01000000},
	{0x30, 0xc2068000},
	{0x34, 0x80a0400f},
	{0x38, 0x04800005},
	{0x3c, 0x80a7001b},
	{0x40, 0xb606ffff},
	{0x44, 0x10bffff8},
	{0x48, 0xb406bffc},
	{0x4c, 0x16800013},
	{0x50, 0x80a7001b},
	{0x54, 0xc2068000},
	{0x58, 0xc2264000},
	{0x5c, 0xb8072001},
	{0x60, 0x80a7001b},
	{0x64, 0x1680000d},
	{0x68, 0xb2066004},
	{0x6c, 0xc2064000},
	{0x70, 0x80a0400f},
	{0x74, 0x26bffffb},
	{0x78, 0xb8072001},
	{0x7c, 0x80a7001b},
	{0xf0, 0x1d},
	{0x00, 0x16800006},
	{0x04, 0x01000000},
	{0x08, 0xc2268000},
	{0x0c, 0xb606ffff},
	{0x10, 0xb406bffc},
	{0x14, 0x80a7001b},
	{0x18, 0x12bfffe4},
	{0x1c, 0x80a7001b},
	{0x20, 0xb0062008},
	{0x24, 0x82073fff},
	{0x28, 0xc2263f64},
	{0x2c, 0xd4263f60},
	{0x30, 0x832f2002},
	{0x34, 0xb0062008},
	{0x38, 0xde22c001},
	{0x3c, 0xba072001},
	{0x40, 0xfa263f60},
	{0x44, 0xda263f64},
	{0x48, 0x98032002},
	{0x4c, 0x80a33fff},
	{0x50, 0x34bfffc9},
	{0x54, 0xd4063f60},
	{0x58, 0x81c7e008},
	{0x5c, 0x81e80000},
	{0x60, 0x00000000},
	{0x64, 0x00000000},
	{0x68, 0x00000000},
	{0x6c, 0x00000000},
	{0x70, 0x00000000},
	{0x74, 0x00000000},
	{0x78, 0x00000000},
	{0x7c, 0x00000000},
	{0xf0, 0x20},
	{0x00, 0x83580000},
	{0x04, 0x82086ff0},
	{0x08, 0x83306004},
	{0x0c, 0x80a06005},
	{0x10, 0x02800027},
	{0x14, 0x01000000},
	{0x18, 0x80a06006},
	{0x1c, 0x0280003c},
	{0x20, 0x01000000},
	{0x24, 0x80a06015},
	{0x28, 0x02800054},
	{0x2c, 0x01000000},
	{0x30, 0x80a0602a},
	{0x34, 0x02800090},
	{0x38, 0x01000000},
	{0x3c, 0x80a06018},
	{0x40, 0x02800085},
	{0x44, 0x01000000},
	{0x48, 0x073fc180},
	{0x4c, 0x8610e03c},
	{0x50, 0x05169680},
	{0x54, 0x84004002},
	{0x58, 0xc420c000},
	{0x5c, 0x073fc000},
	{0x60, 0x8610e020},
	{0x64, 0x84102001},
	{0x68, 0xc420c000},
	{0x6c, 0x0500000c},
	{0x70, 0x01000000},
	{0x74, 0x01000000},
	{0x78, 0x8480bfff},
	{0x7c, 0x12bffffe},
	{0xf0, 0x21},
	{0x00, 0x01000000},
	{0x04, 0x01000000},
	{0x08, 0x073fc000},
	{0x0c, 0x8610e020},
	{0x10, 0x84102000},
	{0x14, 0xc420c000},
	{0x18, 0x01000000},
	{0x1c, 0x01000000},
	{0x20, 0x81c44000},
	{0x24, 0x81cc8000},
	{0x28, 0x01000000},
	{0x2c, 0xa7500000},
	{0x30, 0xa92ce002},
	{0x34, 0xa734e001},
	{0x38, 0xa614c014},
	{0x3c, 0xa60ce007},
	{0x40, 0x81900000},
	{0x44, 0x01000000},
	{0x48, 0x01000000},
	{0x4c, 0x81e00000},
	{0x50, 0xe03ba000},
	{0x54, 0xe43ba008},
	{0x58, 0xe83ba010},
	{0x5c, 0xec3ba018},
	{0x60, 0xf03ba020},
	{0x64, 0xf43ba028},
	{0x68, 0xf83ba030},
	{0x6c, 0xfc3ba038},
	{0x70, 0x81e80000},
	{0x74, 0x8194c000},
	{0x78, 0x01000000},
	{0x7c, 0x01000000},
	{0xf0, 0x22},
	{0x00, 0x81c44000},
	{0x04, 0x81cc8000},
	{0x08, 0x01000000},
	{0x0c, 0xa7500000},
	{0x10, 0xa934e002},
	{0x14, 0xa72ce001},
	{0x18, 0xa614c014},
	{0x1c, 0xa60ce007},
	{0x20, 0x81900000},
	{0x24, 0x01000000},
	{0x28, 0x01000000},
	{0x2c, 0x81e80000},
	{0x30, 0x81e80000},
	{0x34, 0xe01ba000},
	{0x38, 0xe41ba008},
	{0x3c, 0xe81ba010},
	{0x40, 0xec1ba018},
	{0x44, 0xf01ba020},
	{0x48, 0xf41ba028},
	{0x4c, 0xf81ba030},
	{0x50, 0xfc1ba038},
	{0x54, 0x81e00000},
	{0x58, 0x81e00000},
	{0x5c, 0x8194c000},
	{0x60, 0x01000000},
	{0x64, 0x01000000},
	{0x68, 0x81c44000},
	{0x6c, 0x81cc8000},
	{0x70, 0x01000000},
	{0x74, 0x01000000},
	{0x78, 0x82102010},
	{0x7c, 0x273fc0c0},
	{0xf0, 0x23},
	{0x00, 0xa614e010},
	{0x04, 0xc224c000},
	{0x08, 0x01000000},
	{0x0c, 0x033fc0c0},
	{0x10, 0x82106004},
	{0x14, 0xa6102000},
	{0x18, 0xe6204000},
	{0x1c, 0x01000000},
	{0x20, 0x01000000},
	{0x24, 0x01000000},
	{0x28, 0xa6102020},
	{0x2c, 0x83480000},
	{0x30, 0x82104013},
	{0x34, 0x81884000},
	{0x38, 0x01000000},
	{0x3c, 0x40000346},
	{0x40, 0x01000000},
	{0x44, 0x01000000},
	{0x48, 0x01000000},
	{0x4c, 0xa7500000},
	{0x50, 0xa934e002},
	{0x54, 0xa72ce001},
	{0x58, 0xa614c014},
	{0x5c, 0xa60ce007},
	{0x60, 0x81900000},
	{0x64, 0x01000000},
	{0x68, 0x81e80000},
	{0x6c, 0xe01ba000},
	{0x70, 0xe41ba008},
	{0x74, 0xe81ba010},
	{0x78, 0xec1ba018},
	{0x7c, 0xf01ba020},
	{0xf0, 0x24},
	{0x00, 0xf41ba028},
	{0x04, 0xf81ba030},
	{0x08, 0xfc1ba038},
	{0x0c, 0x81e00000},
	{0x10, 0x8194c000},
	{0x14, 0x01000000},
	{0x18, 0xa6102020},
	{0x1c, 0x83480000},
	{0x20, 0x82284013},
	{0x24, 0x81884000},
	{0x28, 0x01000000},
	{0x2c, 0x033fc0c0},
	{0x30, 0x82106004},
	{0x34, 0xa6103fff},
	{0x38, 0xe6204000},
	{0x3c, 0x01000000},
	{0x40, 0x01000000},
	{0x44, 0x01000000},
	{0x48, 0x81c44000},
	{0x4c, 0x81cc8000},
	{0x50, 0x01000000},
	{0x54, 0x82102080},
	{0x58, 0x273fc0c0},
	{0x5c, 0xa614e010},
	{0x60, 0xc224c000},
	{0x64, 0x01000000},
	{0x68, 0x81c44000},
	{0x6c, 0x81cc8000},
	{0x70, 0x01000000},
	{0x74, 0x81c48000},
	{0x78, 0x81cca004},
	{0x7c, 0x01000000},
	{0xf0, 0x25},
	{0x00, 0x1b3fc140},
	{0x04, 0x82136048},
	{0x08, 0xc2104000},
	{0x0c, 0x82006003},
	{0x10, 0x82086003},
	{0x14, 0x83286002},
	{0x18, 0x9a136080},
	{0x1c, 0x81c3e008},
	{0x20, 0xd000400d},
	{0x24, 0x9de3bf98},
	{0x28, 0x9e100018},
	{0x2c, 0xb4102000},
	{0x30, 0xb2102000},
	{0x34, 0x832ea002},
	{0x38, 0xf00063a4},
	{0x3c, 0xb6102000},
	{0x40, 0xb806400f},
	{0x44, 0xbb2ee002},
	{0x48, 0xc2070000},
	{0x4c, 0xb606e001},
	{0x50, 0xc226001d},
	{0x54, 0x80a6e002},
	{0x58, 0x04bffffb},
	{0x5c, 0xb8072004},
	{0x60, 0xb406a001},
	{0x64, 0x80a6a002},
	{0x68, 0x04bffff3},
	{0x6c, 0xb2066018},
	{0x70, 0x81c7e008},
	{0x74, 0x81e80000},
	{0x78, 0x82020008},
	{0x7c, 0x82004008},
	{0xf0, 0x26},
	{0x00, 0x9b326002},
	{0x04, 0x82004001},
	{0x08, 0x8200400d},
	{0x0c, 0x83286002},
	{0x10, 0x920a6003},
	{0x14, 0x932a6003},
	{0x18, 0xd00065b0},
	{0x1c, 0x91320009},
	{0x20, 0x81c3e008},
	{0x24, 0x900a20ff},
	{0x28, 0x9a020008},
	{0x2c, 0x9a034008},
	{0x30, 0x97326002},
	{0x34, 0x9a03400d},
	{0x38, 0x9a03400b},
	{0x3c, 0x920a6003},
	{0x40, 0x9b2b6002},
	{0x44, 0x932a6003},
	{0x48, 0x821020ff},
	{0x4c, 0xd80365b0},
	{0x50, 0x83284009},
	{0x54, 0x822b0001},
	{0x58, 0x952a8009},
	{0x5c, 0x8210400a},
	{0x60, 0xc22365b0},
	{0x64, 0x912a2002},
	{0x68, 0xda0223a4},
	{0x6c, 0x972ae002},
	{0x70, 0x81c3e008},
	{0x74, 0xc223400b},
	{0x78, 0x82102005},
	{0x7c, 0x1b3fc200},
	{0xf0, 0x27},
	{0x00, 0x82204008},
	{0x04, 0x9a136008},
	{0x08, 0x83286002},
	{0x0c, 0xd0034000},
	{0x10, 0x91320001},
	{0x14, 0x81c3e008},
	{0x18, 0x900a200f},
	{0x1c, 0xc200247c},
	{0x20, 0x905a0001},
	{0x24, 0x921a6001},
	{0x28, 0x92024008},
	{0x2c, 0x92024009},
	{0x30, 0x81c3e008},
	{0x34, 0xd0128009},
	{0x38, 0x033fc200},
	{0x3c, 0xda08247b},
	{0x40, 0x921060ac},
	{0x44, 0x941060a0},
	{0x48, 0x981060a4},
	{0x4c, 0x80a36000},
	{0x50, 0x1280000e},
	{0x54, 0x961060a8},
	{0x58, 0xda002358},
	{0x5c, 0x0301001c},
	{0x60, 0x9a034001},
	{0x64, 0x03010000},
	{0x68, 0xc2228000},
	{0x6c, 0x03010008},
	{0x70, 0x82106001},
	{0x74, 0xc2230000},
	{0x78, 0x03010010},
	{0x7c, 0x82106002},
	{0xf0, 0x28},
	{0x00, 0xc222c000},
	{0x04, 0xda224000},
	{0x08, 0x81c3e008},
	{0x0c, 0x01000000},
	{0x10, 0x9de3bf98},
	{0x14, 0xc200247c},
	{0x18, 0x83306001},
	{0x1c, 0x80a60001},
	{0x20, 0x1a800006},
	{0x24, 0x90100018},
	{0x28, 0x7fffffd4},
	{0x2c, 0x01000000},
	{0x30, 0x10800006},
	{0x34, 0xb0020008},
	{0x38, 0x7fffffd0},
	{0x3c, 0x90260001},
	{0x40, 0x90020008},
	{0x44, 0xb0022001},
	{0x48, 0x81c7e008},
	{0x4c, 0x81e80000},
	{0x50, 0x9de3bf90},
	{0x54, 0x03008060},
	{0x58, 0xe8002348},
	{0x5c, 0x82106040},
	{0x60, 0xc227bff0},
	{0x64, 0x03080402},
	{0x68, 0x82106004},
	{0x6c, 0xc227bff4},
	{0x70, 0xa2102000},
	{0x74, 0xc20023d4},
	{0x78, 0x80a44001},
	{0x7c, 0x1a80002f},
	{0xf0, 0x29},
	{0x00, 0xa4102000},
	{0x04, 0xc200247c},
	{0x08, 0x80a48001},
	{0x0c, 0x3a800027},
	{0x10, 0xa2046001},
	{0x14, 0x7fffffdf},
	{0x18, 0x90100012},
	{0x1c, 0xa6100008},
	{0x20, 0x90100011},
	{0x24, 0x7fffff95},
	{0x28, 0x92100013},
	{0x2c, 0x80a62000},
	{0x30, 0x12800004},
	{0x34, 0xa0100008},
	{0x38, 0x10800013},
	{0x3c, 0xa0102000},
	{0x40, 0x80a62008},
	{0x44, 0x1880000e},
	{0x48, 0x80a62007},
	{0x4c, 0x7fffff6d},
	{0x50, 0x01000000},
	{0x54, 0x94100008},
	{0x58, 0x90100011},
	{0x5c, 0x7fffffb0},
	{0x60, 0x92100012},
	{0x64, 0x80a20014},
	{0x68, 0x04800004},
	{0x6c, 0x8206001e},
	{0x70, 0xc2087fef},
	{0x74, 0xa02c0001},
	{0x78, 0x80a62007},
	{0x7c, 0x18800006},
	{0xf0, 0x2a},
	{0x00, 0x92100013},
	{0x04, 0x8206001e},
	{0x08, 0xc2087ff0},
	{0x0c, 0xa0140001},
	{0x10, 0x92100013},
	{0x14, 0x94100010},
	{0x18, 0x7fffff84},
	{0x1c, 0x90100011},
	{0x20, 0x10bfffd9},
	{0x24, 0xa404a001},
	{0x28, 0xc20023d4},
	{0x2c, 0x80a44001},
	{0x30, 0x0abfffd5},
	{0x34, 0xa4102000},
	{0x38, 0x81c7e008},
	{0x3c, 0x81e80000},
	{0x40, 0x98102000},
	{0x44, 0x9610201e},
	{0x48, 0x80a22000},
	{0x4c, 0x12800003},
	{0x50, 0x8210000c},
	{0x54, 0x8222c00c},
	{0x58, 0x83286002},
	{0x5c, 0xda006480},
	{0x60, 0x80a37ff0},
	{0x64, 0x02800006},
	{0x68, 0x98032002},
	{0x6c, 0xc2006484},
	{0x70, 0x80a3201f},
	{0x74, 0x04bffff5},
	{0x78, 0xc2234000},
	{0x7c, 0x81c3e008},
	{0xf0, 0x2b},
	{0x00, 0x01000000},
	{0x04, 0x9de3bf98},
	{0x08, 0xda002508},
	{0x0c, 0x033fc000},
	{0x10, 0x9a0b4001},
	{0x14, 0x173fc180},
	{0x18, 0x03202020},
	{0x1c, 0x82106080},
	{0x20, 0x9812e038},
	{0x24, 0xc2230000},
	{0x28, 0x03168000},
	{0x2c, 0x80a34001},
	{0x30, 0xc022c000},
	{0x34, 0xa2102000},
	{0x38, 0x1280000b},
	{0x3c, 0xa8102000},
	{0x40, 0x0300003f},
	{0x44, 0xda002548},
	{0x48, 0x821063ff},
	{0x4c, 0x9a0b4001},
	{0x50, 0xd8002508},
	{0x54, 0x033fffc0},
	{0x58, 0x980b0001},
	{0x5c, 0x9a13400c},
	{0x60, 0xda202548},
	{0x64, 0x80a62000},
	{0x68, 0x1680001a},
	{0x6c, 0x1b296956},
	{0x70, 0x1b3fc040},
	{0x74, 0xc2002548},
	{0x78, 0x8208400d},
	{0x7c, 0x1b168040},
	{0xf0, 0x2c},
	{0x00, 0x80a0400d},
	{0x04, 0x22800002},
	{0x08, 0xa2102001},
	{0x0c, 0xda002664},
	{0x10, 0xc20021dc},
	{0x14, 0x80a34001},
	{0x18, 0x1a80000e},
	{0x1c, 0x1b296956},
	{0x20, 0x031696a9},
	{0x24, 0xda00250c},
	{0x28, 0x821061a5},
	{0x2c, 0x80a34001},
	{0x30, 0x02800006},
	{0x34, 0x03296956},
	{0x38, 0x8210625a},
	{0x3c, 0x80a34001},
	{0x40, 0x32800004},
	{0x44, 0x1b296956},
	{0x48, 0xa8102001},
	{0x4c, 0x1b296956},
	{0x50, 0x80a00011},
	{0x54, 0x82380018},
	{0x58, 0xa613625a},
	{0x5c, 0x90402000},
	{0x60, 0x8330601f},
	{0x64, 0x1b1696a9},
	{0x68, 0xa41361a5},
	{0x6c, 0x9e104008},
	{0x70, 0xd400254c},
	{0x74, 0xe0002548},
	{0x78, 0x98102500},
	{0x7c, 0xc200250c},
	{0xf0, 0x2d},
	{0x00, 0x96033a50},
	{0x04, 0x921b250c},
	{0x08, 0x80a04013},
	{0x0c, 0x02800007},
	{0x10, 0x9a184012},
	{0x14, 0x80a0000d},
	{0x18, 0x82603fff},
	{0x1c, 0x80904008},
	{0x20, 0x0280000a},
	{0x24, 0x80a3e000},
	{0x28, 0x80a2e0f0},
	{0x2c, 0x9a402000},
	{0x30, 0x80a00009},
	{0x34, 0x82603fff},
	{0x38, 0x80934001},
	{0x3c, 0x3280000a},
	{0x40, 0x98032004},
	{0x44, 0x80a3e000},
	{0x48, 0x02800005},
	{0x4c, 0x82033960},
	{0x50, 0x80a0603f},
	{0x54, 0x28800004},
	{0x58, 0x98032004},
	{0x5c, 0xc0230000},
	{0x60, 0x98032004},
	{0x64, 0x80a3286f},
	{0x68, 0x28bfffe6},
	{0x6c, 0xc200250c},
	{0x70, 0x80a62000},
	{0x74, 0x06800005},
	{0x78, 0x0300003f},
	{0x7c, 0x821063ff},
	{0xf0, 0x2e},
	{0x00, 0x820a8001},
	{0x04, 0xc220254c},
	{0x08, 0xc2002548},
	{0x0c, 0xd6002334},
	{0x10, 0xda0023c8},
	{0x14, 0x9602e001},
	{0x18, 0xd800254c},
	{0x1c, 0x9e087dff},
	{0x20, 0x9b336012},
	{0x24, 0x94050014},
	{0x28, 0x9a0b6200},
	{0x2c, 0x980b3ffd},
	{0x30, 0x8332e001},
	{0x34, 0x313fc200},
	{0x38, 0x9813000a},
	{0x3c, 0x9e13c00d},
	{0x40, 0x8202c001},
	{0x44, 0xda002344},
	{0x48, 0xd820254c},
	{0x4c, 0xc220258c},
	{0x50, 0x94162030},
	{0x54, 0xda228000},
	{0x58, 0x92162038},
	{0x5c, 0xda224000},
	{0x60, 0x91342018},
	{0x64, 0xda20257c},
	{0x68, 0x80a2205a},
	{0x6c, 0xd6202554},
	{0x70, 0xd6202588},
	{0x74, 0xde202548},
	{0x78, 0x12800009},
	{0x7c, 0xda202570},
	{0xf0, 0x2f},
	{0x00, 0x0300003f},
	{0x04, 0x821063ff},
	{0x08, 0x1b3fffc0},
	{0x0c, 0x820bc001},
	{0x10, 0x9a0c000d},
	{0x14, 0x8210400d},
	{0x18, 0xc2202548},
	{0x1c, 0x80a46001},
	{0x20, 0x1280000c},
	{0x24, 0x03296956},
	{0x28, 0xc2002548},
	{0x2c, 0x83306011},
	{0x30, 0x80886001},
	{0x34, 0x22800010},
	{0x38, 0x82102059},
	{0x3c, 0x9a162074},
	{0x40, 0xc2002330},
	{0x44, 0xc2234000},
	{0x48, 0x1080000b},
	{0x4c, 0x82102059},
	{0x50, 0xda00250c},
	{0x54, 0x8210625a},
	{0x58, 0x80a34001},
	{0x5c, 0x1280000b},
	{0x60, 0x01000000},
	{0x64, 0xc200254c},
	{0x68, 0x80886002},
	{0x6c, 0x12800007},
	{0x70, 0x82102015},
	{0x74, 0xc2202500},
	{0x78, 0x7ffffeab},
	{0x7c, 0x901025b0},
	{0xf0, 0x30},
	{0x00, 0x7ffffeee},
	{0x04, 0x81e80000},
	{0x08, 0x01000000},
	{0x0c, 0x81c7e008},
	{0x10, 0x81e80000},
	{0x14, 0x81c3e008},
	{0x18, 0x01000000},
	{0x1c, 0xc208247b},
	{0x20, 0x80a06000},
	{0x24, 0x02800012},
	{0x28, 0x033fc200},
	{0x2c, 0x9a100001},
	{0x30, 0x8210612c},
	{0x34, 0x94136140},
	{0x38, 0x96136160},
	{0x3c, 0x9810200a},
	{0x40, 0x80a0400a},
	{0x44, 0x12800004},
	{0x48, 0x80a0400b},
	{0x4c, 0x10800004},
	{0x50, 0x8213614c},
	{0x54, 0x22800002},
	{0x58, 0x8213616c},
	{0x5c, 0xc0204000},
	{0x60, 0x98833fff},
	{0x64, 0x1cbffff7},
	{0x68, 0x82006004},
	{0x6c, 0x81c3e008},
	{0x70, 0x01000000},
	{0x74, 0x9de3bf98},
	{0x78, 0x033fc200},
	{0x7c, 0xb8106094},
	{0xf0, 0x31},
	{0x00, 0xb6106090},
	{0x04, 0xb4106068},
	{0x08, 0xb2106064},
	{0x0c, 0x9a106060},
	{0x10, 0xb010604c},
	{0x14, 0x92106024},
	{0x18, 0x98106058},
	{0x1c, 0x030001c0},
	{0x20, 0xde08247b},
	{0x24, 0x82106011},
	{0x28, 0xc2270000},
	{0x2c, 0x03000100},
	{0x30, 0xc226c000},
	{0x34, 0x030000c0},
	{0x38, 0xc2268000},
	{0x3c, 0x03004009},
	{0x40, 0x82106182},
	{0x44, 0xc2264000},
	{0x48, 0x0300065f},
	{0x4c, 0x3b3fc140},
	{0x50, 0x821063ff},
	{0x54, 0xc2260000},
	{0x58, 0x94176040},
	{0x5c, 0x96176020},
	{0x60, 0xba102002},
	{0x64, 0x033fc1c0},
	{0x68, 0xfa204000},
	{0x6c, 0x80a3e000},
	{0x70, 0x0280000a},
	{0x74, 0xc0234000},
	{0x78, 0x03008450},
	{0x7c, 0x82106340},
	{0xf0, 0x32},
	{0x00, 0xc2230000},
	{0x04, 0x82102015},
	{0x08, 0xc2228000},
	{0x0c, 0x821020ff},
	{0x10, 0xc2224000},
	{0x14, 0xc022c000},
	{0x18, 0x81c7e008},
	{0x1c, 0x81e80000},
	{0x20, 0x9de3bf98},
	{0x24, 0x03000017},
	{0x28, 0x961062a8},
	{0x2c, 0x9a102000},
	{0x30, 0x98102000},
	{0x34, 0x832b6002},
	{0x38, 0xd820400b},
	{0x3c, 0x9a036001},
	{0x40, 0x80a36001},
	{0x44, 0x04bffffc},
	{0x48, 0x98033fe0},
	{0x4c, 0x9a102000},
	{0x50, 0xc2002300},
	{0x54, 0x80a34001},
	{0x58, 0x1a80000d},
	{0x5c, 0x03000019},
	{0x60, 0x9610632c},
	{0x64, 0x98106328},
	{0x68, 0x832b6003},
	{0x6c, 0xc020400b},
	{0x70, 0xc020400c},
	{0x74, 0x9a036001},
	{0x78, 0xc2002300},
	{0x7c, 0x80a34001},
	{0xf0, 0x33},
	{0x00, 0x0abffffb},
	{0x04, 0x832b6003},
	{0x08, 0x9a102000},
	{0x0c, 0xc2002304},
	{0x10, 0x80a34001},
	{0x14, 0x1a80000a},
	{0x18, 0x03000019},
	{0x1c, 0x981063c0},
	{0x20, 0x832b6002},
	{0x24, 0xc020400c},
	{0x28, 0x9a036001},
	{0x2c, 0xc2002304},
	{0x30, 0x80a34001},
	{0x34, 0x0abffffc},
	{0x38, 0x832b6002},
	{0x3c, 0xc02026fc},
	{0x40, 0x40000143},
	{0x44, 0x90102000},
	{0x48, 0xc208247b},
	{0x4c, 0x80a06000},
	{0x50, 0x32800003},
	{0x54, 0x03000040},
	{0x58, 0x03200040},
	{0x5c, 0x82106101},
	{0x60, 0x1b3fc200},
	{0x64, 0x193fc200},
	{0x68, 0xc2234000},
	{0x6c, 0xa2132074},
	{0x70, 0xea0021fc},
	{0x74, 0xc2002298},
	{0x78, 0x98132070},
	{0x7c, 0xc2230000},
	{0xf0, 0x34},
	{0x00, 0x033fc000},
	{0x04, 0xd8002338},
	{0x08, 0x82106030},
	{0x0c, 0xd8204000},
	{0x10, 0xc200232c},
	{0x14, 0xc2244000},
	{0x18, 0x1b3fc140},
	{0x1c, 0x0300003f},
	{0x20, 0x17000019},
	{0x24, 0xa0136058},
	{0x28, 0x821063ff},
	{0x2c, 0xc2240000},
	{0x30, 0x9e136080},
	{0x34, 0x9212e0e8},
	{0x38, 0xd223c000},
	{0x3c, 0x90136084},
	{0x40, 0xa613608c},
	{0x44, 0xa412e208},
	{0x48, 0xa813605c},
	{0x4c, 0x9412e148},
	{0x50, 0xd4220000},
	{0x54, 0x9a136088},
	{0x58, 0x9612e1a8},
	{0x5c, 0xd6234000},
	{0x60, 0x033fc0c0},
	{0x64, 0xe424c000},
	{0x68, 0x82106004},
	{0x6c, 0xc0204000},
	{0x70, 0xc0250000},
	{0x74, 0x80a56000},
	{0x78, 0xc2002374},
	{0x7c, 0xda00247c},
	{0xf0, 0x35},
	{0x00, 0xd60023d4},
	{0x04, 0x02800006},
	{0x08, 0xd00023f8},
	{0x0c, 0x82584015},
	{0x10, 0x82006800},
	{0x14, 0x10800003},
	{0x18, 0xa530600c},
	{0x1c, 0xa4100001},
	{0x20, 0x213fc140},
	{0x24, 0x98142040},
	{0x28, 0xd2030000},
	{0x2c, 0x9b336001},
	{0x30, 0x825b400b},
	{0x34, 0x920a7800},
	{0x38, 0x92124001},
	{0x3c, 0xd2230000},
	{0x40, 0x82142004},
	{0x44, 0xd2004000},
	{0x48, 0x920a7fe0},
	{0x4c, 0x9212400d},
	{0x50, 0xd2204000},
	{0x54, 0x273fc200},
	{0x58, 0x8214e080},
	{0x5c, 0xd2004000},
	{0x60, 0x920a7fe0},
	{0x64, 0x9212400d},
	{0x68, 0xd2204000},
	{0x6c, 0x9814e054},
	{0x70, 0x82102114},
	{0x74, 0xc2230000},
	{0x78, 0x9a14e008},
	{0x7c, 0x03009051},
	{0xf0, 0x36},
	{0x00, 0xd0234000},
	{0x04, 0x9614e058},
	{0x08, 0x82106040},
	{0x0c, 0xc222c000},
	{0x10, 0x9414e00c},
	{0x14, 0xd0228000},
	{0x18, 0x82102003},
	{0x1c, 0x233fc1c0},
	{0x20, 0x7ffffe26},
	{0x24, 0xc2244000},
	{0x28, 0x9a14e07c},
	{0x2c, 0xd2034000},
	{0x30, 0x033ff000},
	{0x34, 0x922a4001},
	{0x38, 0xd2234000},
	{0x3c, 0xc2002340},
	{0x40, 0xa2146064},
	{0x44, 0xc2244000},
	{0x48, 0x0300007f},
	{0x4c, 0x96142010},
	{0x50, 0x821063ff},
	{0x54, 0x94142030},
	{0x58, 0x1907ffc0},
	{0x5c, 0xc222c000},
	{0x60, 0xa0142014},
	{0x64, 0xd8228000},
	{0x68, 0x80a4a000},
	{0x6c, 0x0280000f},
	{0x70, 0xd8240000},
	{0x74, 0x932ca010},
	{0x78, 0x8204a001},
	{0x7c, 0x9b2ca004},
	{0xf0, 0x37},
	{0x00, 0x83286010},
	{0x04, 0x9a02400d},
	{0x08, 0x9814e084},
	{0x0c, 0xda230000},
	{0x10, 0x82004012},
	{0x14, 0x9614e088},
	{0x18, 0x82006002},
	{0x1c, 0x9414e08c},
	{0x20, 0xd222c000},
	{0x24, 0xc2228000},
	{0x28, 0xc2002174},
	{0x2c, 0x80a06000},
	{0x30, 0x02800007},
	{0x34, 0x173fc080},
	{0x38, 0xc2082174},
	{0x3c, 0xda082177},
	{0x40, 0x9812e008},
	{0x44, 0xc2230000},
	{0x48, 0xda22c000},
	{0x4c, 0x7ffffe6e},
	{0x50, 0x90103fff},
	{0x54, 0x7ffffe5b},
	{0x58, 0x90102001},
	{0x5c, 0x7fffff26},
	{0x60, 0x01000000},
	{0x64, 0x7fffff0e},
	{0x68, 0x01000000},
	{0x6c, 0x033fc0c0},
	{0x70, 0xd808247b},
	{0x74, 0x82106004},
	{0x78, 0x9a103fff},
	{0x7c, 0xda204000},
	{0xf0, 0x38},
	{0x00, 0x80a32000},
	{0x04, 0x02800003},
	{0x08, 0x03200040},
	{0x0c, 0x03000040},
	{0x10, 0xc224c000},
	{0x14, 0x81c7e008},
	{0x18, 0x81e80000},
	{0x1c, 0x9de3bf88},
	{0x20, 0xb0102000},
	{0x24, 0x9e102001},
	{0x28, 0xb407bff8},
	{0x2c, 0xb2102000},
	{0x30, 0xc026bff0},
	{0x34, 0xb8102000},
	{0x38, 0x8206401c},
	{0x3c, 0xfa0865b0},
	{0x40, 0x820f6003},
	{0x44, 0x83286006},
	{0x48, 0xbb3f6002},
	{0x4c, 0xba074001},
	{0x50, 0xb72bc01c},
	{0x54, 0xc20022c4},
	{0x58, 0x80a74001},
	{0x5c, 0x08800005},
	{0x60, 0xb8072001},
	{0x64, 0xc206bff0},
	{0x68, 0x8200401b},
	{0x6c, 0xc226bff0},
	{0x70, 0x80a7200b},
	{0x74, 0x04bffff2},
	{0x78, 0x8206401c},
	{0x7c, 0xb0062001},
	{0xf0, 0x39},
	{0x00, 0xb2066018},
	{0x04, 0x80a62002},
	{0x08, 0x04bfffea},
	{0x0c, 0xb406a004},
	{0x10, 0xc207bfec},
	{0x14, 0xfa07bfe8},
	{0x18, 0x83286010},
	{0x1c, 0x8200401d},
	{0x20, 0x393fc180},
	{0x24, 0xba172038},
	{0x28, 0xc2274000},
	{0x2c, 0xb817202c},
	{0x30, 0xc207bff0},
	{0x34, 0xc2270000},
	{0x38, 0x81c7e008},
	{0x3c, 0x81e80000},
	{0x40, 0x9de3bf98},
	{0x44, 0x03000019},
	{0x48, 0x9a100018},
	{0x4c, 0x9e100019},
	{0x50, 0x9610632c},
	{0x54, 0xb4102000},
	{0x58, 0x98106328},
	{0x5c, 0xc24ea400},
	{0x60, 0xb12ea003},
	{0x64, 0xb9286002},
	{0x68, 0x80a06000},
	{0x6c, 0x06800010},
	{0x70, 0xb2004001},
	{0x74, 0xc24ea420},
	{0x78, 0xbb286002},
	{0x7c, 0x82004001},
	{0xf0, 0x3a},
	{0x00, 0xf603401d},
	{0x04, 0xc213c001},
	{0x08, 0xf803401c},
	{0x0c, 0xfa13c019},
	{0x10, 0x8220401b},
	{0x14, 0xba27401c},
	{0x18, 0xb406a001},
	{0x1c, 0xc226000b},
	{0x20, 0x80a6a012},
	{0x24, 0x08bfffee},
	{0x28, 0xfa26000c},
	{0x2c, 0xb4102000},
	{0x30, 0xc2002304},
	{0x34, 0x80a68001},
	{0x38, 0x1a800010},
	{0x3c, 0x03000019},
	{0x40, 0xb81063c0},
	{0x44, 0xc24ea380},
	{0x48, 0xbb286002},
	{0x4c, 0x82004001},
	{0x50, 0xfa03401d},
	{0x54, 0xc213c001},
	{0x58, 0x8220401d},
	{0x5c, 0xbb2ea002},
	{0x60, 0xc227401c},
	{0x64, 0xb406a001},
	{0x68, 0xc2002304},
	{0x6c, 0x80a68001},
	{0x70, 0x2abffff6},
	{0x74, 0xc24ea380},
	{0x78, 0x81c7e008},
	{0x7c, 0x81e80000},
	{0xf0, 0x3b},
	{0x00, 0x9de3bf98},
	{0x04, 0xc2002508},
	{0x08, 0x808860ff},
	{0x0c, 0x02800015},
	{0x10, 0x1b3fc180},
	{0x14, 0x82102001},
	{0x18, 0x9a13603c},
	{0x1c, 0xc2234000},
	{0x20, 0xc2002508},
	{0x24, 0x820860ff},
	{0x28, 0x80a04018},
	{0x2c, 0x1280000b},
	{0x30, 0x033fc180},
	{0x34, 0x7ffffc01},
	{0x38, 0x01000000},
	{0x3c, 0xda002508},
	{0x40, 0x033fc040},
	{0x44, 0x9a0b60ff},
	{0x48, 0x8210600c},
	{0x4c, 0xc0204000},
	{0x50, 0x10bffff7},
	{0x54, 0x80a34018},
	{0x58, 0x8210603c},
	{0x5c, 0xc0204000},
	{0x60, 0x81c7e008},
	{0x64, 0x81e80000},
	{0x68, 0x9a102000},
	{0x6c, 0x832b6002},
	{0x70, 0x9a036001},
	{0x74, 0x80a3602f},
	{0x78, 0x08bffffd},
	{0x7c, 0xc0220001},
	{0xf0, 0x3c},
	{0x00, 0x81c3e008},
	{0x04, 0x01000000},
	{0x08, 0x9de3bf98},
	{0x0c, 0x03000018},
	{0x10, 0x9e106268},
	{0x14, 0xb6102000},
	{0x18, 0xb41062c8},
	{0x1c, 0xbb2ee003},
	{0x20, 0x81800000},
	{0x24, 0xc206001d},
	{0x28, 0x01000000},
	{0x2c, 0x01000000},
	{0x30, 0x82704019},
	{0x34, 0xc226001d},
	{0x38, 0x82074018},
	{0x3c, 0x81800000},
	{0x40, 0xf8006004},
	{0x44, 0x01000000},
	{0x48, 0x01000000},
	{0x4c, 0xb8770019},
	{0x50, 0xf8206004},
	{0x54, 0xc206001d},
	{0x58, 0x83286010},
	{0x5c, 0xbb2ee002},
	{0x60, 0x8200401c},
	{0x64, 0xc226001d},
	{0x68, 0xc227401a},
	{0x6c, 0xb606e001},
	{0x70, 0xc206001d},
	{0x74, 0x80a6e017},
	{0x78, 0x08bfffe9},
	{0x7c, 0xc227400f},
	{0xf0, 0x3d},
	{0x00, 0x81c7e008},
	{0x04, 0x81e80000},
	{0x08, 0x98102000},
	{0x0c, 0x9b2b2002},
	{0x10, 0x98032001},
	{0x14, 0xc202000d},
	{0x18, 0x80a32017},
	{0x1c, 0x04bffffc},
	{0x20, 0xc222400d},
	{0x24, 0x81c3e008},
	{0x28, 0x01000000},
	{0x2c, 0x81c3e008},
	{0x30, 0x01000000},
	{0x34, 0x81c3e008},
	{0x38, 0x01000000},
	{0x3c, 0x81c3e008},
	{0x40, 0x01000000},
	{0x44, 0x81c3e008},
	{0x48, 0x01000000},
	{0x4c, 0x81c3e008},
	{0x50, 0x01000000},
	{0x54, 0x9de3bf98},
	{0x58, 0x7ffffbb8},
	{0x5c, 0x01000000},
	{0x60, 0x033fc040},
	{0x64, 0xe2002500},
	{0x68, 0x8210600c},
	{0x6c, 0x80a46058},
	{0x70, 0x08800013},
	{0x74, 0xc0204000},
	{0x78, 0xc0202584},
	{0x7c, 0xa0102000},
	{0xf0, 0x3e},
	{0x00, 0x832c2002},
	{0x04, 0xc2006f04},
	{0x08, 0x80a06000},
	{0x0c, 0x0280005e},
	{0x10, 0xa0042001},
	{0x14, 0x9fc04000},
	{0x18, 0x01000000},
	{0x1c, 0xc2002584},
	{0x20, 0x80a06000},
	{0x24, 0x12800058},
	{0x28, 0x80a4203b},
	{0x2c, 0x24bffff6},
	{0x30, 0x832c2002},
	{0x34, 0x10800055},
	{0x38, 0xc2002500},
	{0x3c, 0x80a46000},
	{0x40, 0x12800017},
	{0x44, 0x80a46014},
	{0x48, 0x19169683},
	{0x4c, 0x9a132300},
	{0x50, 0xc2002f00},
	{0x54, 0x80a0400d},
	{0x58, 0x12800006},
	{0x5c, 0x9a1323fc},
	{0x60, 0xc2002ffc},
	{0x64, 0x80a0400d},
	{0x68, 0x22800005},
	{0x6c, 0xc2002ff4},
	{0x70, 0x400000e7},
	{0x74, 0x01000000},
	{0x78, 0xc2002ff4},
	{0x7c, 0x9fc04000},
	{0xf0, 0x3f},
	{0x00, 0x01000000},
	{0x04, 0x7ffffd80},
	{0x08, 0x90102000},
	{0x0c, 0x7ffffd6d},
	{0x10, 0x90102001},
	{0x14, 0x1080003d},
	{0x18, 0xc2002500},
	{0x1c, 0x1880000c},
	{0x20, 0x80a46015},
	{0x24, 0x808c6001},
	{0x28, 0x32800038},
	{0x2c, 0xc2002500},
	{0x30, 0x90047ffe},
	{0x34, 0x7ffffd27},
	{0x38, 0x91322001},
	{0x3c, 0x7ffffcff},
	{0x40, 0x01000000},
	{0x44, 0x10800031},
	{0x48, 0xc2002500},
	{0x4c, 0x18800011},
	{0x50, 0x80a46018},
	{0x54, 0x033fc180},
	{0x58, 0xda0025b0},
	{0x5c, 0x82106038},
	{0x60, 0xda204000},
	{0x64, 0x033fc200},
	{0x68, 0xda00232c},
	{0x6c, 0x82106074},
	{0x70, 0xda204000},
	{0x74, 0x7ffffd53},
	{0x78, 0x90102000},
	{0x7c, 0xc2002ff4},
	{0xf0, 0x40},
	{0x00, 0x9fc04000},
	{0x04, 0x01000000},
	{0x08, 0x10800020},
	{0x0c, 0xc2002500},
	{0x10, 0x18800007},
	{0x14, 0x80a46058},
	{0x18, 0x11000019},
	{0x1c, 0x7fffff73},
	{0x20, 0x90122268},
	{0x24, 0x10800019},
	{0x28, 0xc2002500},
	{0x2c, 0x38800017},
	{0x30, 0xc2002500},
	{0x34, 0x7ffffc93},
	{0x38, 0xa0102000},
	{0x3c, 0x15000019},
	{0x40, 0x9612a268},
	{0x44, 0x82040010},
	{0x48, 0x992c2002},
	{0x4c, 0xda120001},
	{0x50, 0xc203000b},
	{0x54, 0x8200400d},
	{0x58, 0xa0042001},
	{0x5c, 0x80a4202f},
	{0x60, 0x04bffff9},
	{0x64, 0xc223000b},
	{0x68, 0x80a46058},
	{0x6c, 0x12800004},
	{0x70, 0x9012a268},
	{0x74, 0x7fffff65},
	{0x78, 0x92102040},
	{0x7c, 0x7ffffee8},
	{0xf0, 0x41},
	{0x00, 0x01000000},
	{0x04, 0xc2002500},
	{0x08, 0x80a44001},
	{0x0c, 0x1280000b},
	{0x10, 0x031fffff},
	{0x14, 0x821063f0},
	{0x18, 0x80a44001},
	{0x1c, 0x38800003},
	{0x20, 0x23040000},
	{0x24, 0xa2046001},
	{0x28, 0x033fc180},
	{0x2c, 0x82106034},
	{0x30, 0xe2204000},
	{0x34, 0xe2202500},
	{0x38, 0x81c7e008},
	{0x3c, 0x81e80000},
	{0x40, 0x81c3e008},
	{0x44, 0x01000000},
	{0x48, 0x81c3e008},
	{0x4c, 0x01000000},
	{0x50, 0x81c3e008},
	{0x54, 0x01000000},
	{0x58, 0x1500003f},
	{0x5c, 0xd8002508},
	{0x60, 0x8212a300},
	{0x64, 0x808b3f00},
	{0x68, 0x02800016},
	{0x6c, 0x9a0b0001},
	{0x70, 0xc200254c},
	{0x74, 0x8210400d},
	{0x78, 0xc220254c},
	{0x7c, 0x1b3fc000},
	{0xf0, 0x42},
	{0x00, 0xc2002500},
	{0x04, 0x960b000d},
	{0x08, 0x80a06058},
	{0x0c, 0xc0202508},
	{0x10, 0x0880000c},
	{0x14, 0x033fffc0},
	{0x18, 0x9a0b0001},
	{0x1c, 0x03168000},
	{0x20, 0x80a2c001},
	{0x24, 0x12800007},
	{0x28, 0x9412a3ff},
	{0x2c, 0xc2002548},
	{0x30, 0x8208400a},
	{0x34, 0x8210400d},
	{0x38, 0xc2202548},
	{0x3c, 0xc02026e4},
	{0x40, 0x81c3e008},
	{0x44, 0x01000000},
	{0x48, 0x81c3e008},
	{0x4c, 0x01000000},
	{0x50, 0x81c3e008},
	{0x54, 0x01000000},
	{0x58, 0x81c3e008},
	{0x5c, 0x01000000},
	{0x60, 0x81c3e008},
	{0x64, 0x01000000},
	{0x68, 0x81c3e008},
	{0x6c, 0x01000000},
	{0x70, 0x81c3e008},
	{0x74, 0x01000000},
	{0x78, 0x81c3e008},
	{0x7c, 0x01000000},
	{0xf0, 0x43},
	{0x00, 0x81c3e008},
	{0x04, 0x01000000},
	{0x08, 0x81c3e008},
	{0x0c, 0x01000000},
	{0x10, 0x81c3e008},
	{0x14, 0x01000000},
	{0x18, 0x81c3e008},
	{0x1c, 0x01000000},
	{0x20, 0x81c3e008},
	{0x24, 0x01000000},
	{0x28, 0x81c3e008},
	{0x2c, 0x01000000},
	{0x30, 0x81c3e008},
	{0x34, 0x01000000},
	{0x38, 0x9a102000},
	{0x3c, 0x193fc180},
	{0x40, 0x832b6002},
	{0x44, 0x9a036001},
	{0x48, 0x80a36004},
	{0x4c, 0x04bffffd},
	{0x50, 0xc020400c},
	{0x54, 0x81c3e008},
	{0x58, 0x01000000},
	{0x5c, 0x81c3e008},
	{0x60, 0x01000000},
	{0x64, 0x00000000},
	{0x68, 0x00000000},
	{0x6c, 0x00000000},
	{0x70, 0x00000000},
	{0x74, 0x00000000},
	{0x78, 0x00000000},
	{0x7c, 0x00000000},
	{0xf0, 0x44},
	{0x00, 0x00002133},
	{0x04, 0xa5010503},
	{0x08, 0xa5000000},
	{0x0c, 0x00000000},
	{0x10, 0x67616f79},
	{0x14, 0x49444449},
	{0x18, 0xc9d599f5},
	{0x1c, 0xbc550000},
	{0x20, 0x00000000},
	{0x24, 0x00000000},
	{0x28, 0x00000000},
	{0x2c, 0x00000000},
	{0x30, 0x00000000},
	{0x34, 0x00000000},
	{0x38, 0x00000000},
	{0x3c, 0x00000000},
	{0x40, 0x00000000},
	{0x44, 0x00000000},
	{0x48, 0x00000000},
	{0x4c, 0x00000000},
	{0x50, 0x00000000},
	{0x54, 0x00000000},
	{0x58, 0x00000000},
	{0x5c, 0x00000000},
	{0x60, 0x00000000},
	{0x64, 0x00000000},
	{0x68, 0x44656320},
	{0x6c, 0x31372032},
	{0x70, 0x30313500},
	{0x74, 0x00000000},
	{0x78, 0x31383a34},
	{0x7c, 0x383a3331},


};


