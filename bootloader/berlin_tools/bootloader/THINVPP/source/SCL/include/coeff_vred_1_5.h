const unsigned short coeff_vred_1_5[33][12] = {
    {0x0833, 0x0000, 0x0131, 0x0204, 0x0131, 0x0000, 0x0833, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0832, 0x0803, 0x012b, 0x0204, 0x0136, 0x0003, 0x0833, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0831, 0x0806, 0x0126, 0x0204, 0x013c, 0x0006, 0x0834, 0x0801, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0830, 0x0808, 0x0120, 0x0204, 0x0141, 0x0009, 0x0835, 0x0801, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0830, 0x080b, 0x011b, 0x0204, 0x0147, 0x000c, 0x0835, 0x0802, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x082f, 0x080e, 0x0115, 0x0204, 0x014c, 0x0010, 0x0836, 0x0802, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x082e, 0x0810, 0x0110, 0x0203, 0x0152, 0x0013, 0x0837, 0x0803, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x082d, 0x0813, 0x010a, 0x0203, 0x0157, 0x0016, 0x0837, 0x0803, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x082c, 0x0815, 0x0105, 0x0202, 0x015c, 0x001a, 0x0838, 0x0804, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x082b, 0x0817, 0x00ff, 0x0200, 0x0161, 0x001e, 0x0838, 0x0804, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x082b, 0x081a, 0x00fa, 0x0201, 0x0167, 0x0021, 0x0839, 0x0805, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x082a, 0x081c, 0x00f4, 0x0200, 0x016c, 0x0025, 0x0839, 0x0806, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0829, 0x081e, 0x00ef, 0x01fd, 0x0172, 0x0029, 0x083a, 0x0806, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0828, 0x0820, 0x00e9, 0x01fc, 0x0177, 0x002d, 0x083a, 0x0807, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0827, 0x0822, 0x00e3, 0x01fb, 0x017c, 0x0031, 0x083a, 0x0808, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0826, 0x0824, 0x00de, 0x01f9, 0x0181, 0x0035, 0x083b, 0x0808, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0825, 0x0825, 0x00d8, 0x01f7, 0x0186, 0x0039, 0x083b, 0x0809, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0824, 0x0827, 0x00d3, 0x01f5, 0x018b, 0x003d, 0x083b, 0x080a, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0823, 0x0829, 0x00cd, 0x01f3, 0x0190, 0x0041, 0x083b, 0x080a, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0822, 0x082a, 0x00c8, 0x01f1, 0x0194, 0x0045, 0x083b, 0x080b, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0821, 0x082c, 0x00c2, 0x01ef, 0x0199, 0x004a, 0x083b, 0x080c, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0820, 0x082d, 0x00bd, 0x01ec, 0x019e, 0x004e, 0x083b, 0x080d, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x081f, 0x082e, 0x00b7, 0x01e9, 0x01a2, 0x0053, 0x083b, 0x080d, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x081e, 0x0830, 0x00b2, 0x01e7, 0x01a7, 0x0057, 0x083b, 0x080e, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x081d, 0x0831, 0x00ad, 0x01e4, 0x01ab, 0x005c, 0x083b, 0x080f, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x081c, 0x0832, 0x00a7, 0x01e2, 0x01af, 0x0061, 0x083b, 0x0810, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x081b, 0x0833, 0x00a2, 0x01df, 0x01b4, 0x0065, 0x083b, 0x0811, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x081b, 0x0834, 0x009d, 0x01dc, 0x01b8, 0x006a, 0x083a, 0x0812, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x081a, 0x0835, 0x0097, 0x01d9, 0x01bc, 0x006f, 0x083a, 0x0812, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0819, 0x0836, 0x0092, 0x01d6, 0x01c0, 0x0074, 0x083a, 0x0813, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0818, 0x0837, 0x008d, 0x01d2, 0x01c4, 0x0079, 0x0839, 0x0814, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0817, 0x0837, 0x0088, 0x01cf, 0x01c7, 0x007e, 0x0839, 0x0815, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0816, 0x0838, 0x0083, 0x01cb, 0x01cb, 0x0083, 0x0838, 0x0816, 0x0000, 0x0000, 0x0000, 0x0000},
};