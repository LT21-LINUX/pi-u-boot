//////
/// don't edit! auto-generated by docc: avio_memmap.h
////////////////////////////////////////////////////////////
#ifndef avio_memmap_h
#define avio_memmap_h (){}


#include "ctypes.h"

#pragma pack(1)
#ifdef __cplusplus
  extern "C" {
#endif

#ifndef _DOCC_H_BITOPS_
#define _DOCC_H_BITOPS_ (){}

    #define _bSETMASK_(b)                                      ((b)<32 ? (1<<((b)&31)) : 0)
    #define _NSETMASK_(msb,lsb)                                (_bSETMASK_((msb)+1)-_bSETMASK_(lsb))
    #define _bCLRMASK_(b)                                      (~_bSETMASK_(b))
    #define _NCLRMASK_(msb,lsb)                                (~_NSETMASK_(msb,lsb))
    #define _BFGET_(r,msb,lsb)                                 (_NSETMASK_((msb)-(lsb),0)&((r)>>(lsb)))
    #define _BFSET_(r,msb,lsb,v)                               do{ (r)&=_NCLRMASK_(msb,lsb); (r)|=_NSETMASK_(msb,lsb)&((v)<<(lsb)); }while(0)

#endif



//////
///
/// $INTERFACE AVIO_MEMMAP                              (4,4)
///     # # ----------------------------------------------------------
///               : VPP128B_DHUB_REG_BASE 0x0
///                            ###
///                            * Base address of VPP 128 bit DHUB control Registers
///                            * 128 KB
///                            ###
///               : VPP128B_DHUB_REG_SIZE 0x20000
///                            ###
///                            * Size of VPP 128bit DHUB Registers memory mapping
///                            ###
///               : VPP128B_DHUB_REG_DEC_BIT 0x11
///                            ###
///                            * 128 KB has a 17 bits offset
///                            ###
///               : AVIO_SNPS_HDMITX_REG_BASE 0x20000
///                            ###
///                            * Base address for SNPS HDMI-TX registers
///                            * 128 KB
///                            ###
///               : AVIO_SNPS_HDMITX_REG_SIZE 0x20000
///                            ###
///                            * Size of HDMITX Wrap registers
///                            ###
///               : AVIO_SNPS_HDMITX_REG_DEC_BIT 0x11
///                            ###
///                            * 128KB has a 17 bits offset
///                            ###
///               : AIO64B_DHUB_REG_BASE 0x40000
///                            ###
///                            * Base address of AIO 64bit DHUB control Registers
///                            * 64 KB
///                            ###
///               : AIO64B_DHUB_REG_SIZE 0x10000
///                            ###
///                            * Size of AIO 64bit DHUB Registers memory mapping
///                            ###
///               : AIO64B_DHUB_REG_DEC_BIT 0x10
///                            ###
///                            * 64 KB has a 16 bits offset
///                            ###
///               : VPP_MP_REG_BASE    0x50000
///                            ###
///                            * Base address of VPP MP Registers
///                            * 64KB
///                            ###
///               : VPP_MP_REG_SIZE    0x10000
///                            ###
///                            * Size of VPP_MP registers
///                            ###
///               : VPP_MP_REG_DEC_BIT 0x10
///                            ###
///                            * 64 KB has a 16 bits offset
///                            ###
///               : VPP_GFX_VOP_REG_BASE 0x60000
///                            ###
///                            * Base address of VPP GFX VOP Registers
///                            * 64KB
///                            ###
///               : VPP_GFX_VOP_REG_SIZE 0x10000
///                            ###
///                            * Size of VPP_GFX_VOP registers
///                            ###
///               : VPP_GFX_VOP_REG_DEC_BIT 0x10
///                            ###
///                            * 64 KB has a 16 bits offset
///                            ###
///               : VPP_REG_BASE       0x70000
///                            ###
///                            * Base address of Video Post Process control Registers
///                            * 16 KB
///                            ###
///               : VPP_REG_SIZE       0x4000
///                            ###
///                            * Size of Video Post Process Registers memory mapping
///                            ###
///               : VPP_REG_DEC_BIT    0xE
///                            ###
///                            * 16 KB has a 14 bits offset
///                            ###
///               : AVIO_I2S_REG_BASE  0x74000
///                            ###
///                            * Base address for I2S Registers
///                            * 1 KB
///                            ###
///               : AVIO_I2S_REG_SIZE  0x400
///                            ###
///                            * Size of I2S Registers memory mapping
///                            ###
///               : AVIO_I2S_REG_DEC_BIT 0xA
///                            ###
///                            * 1 KB has a 10 bits offset
///                            ###
///               : AVIO_HDMIRXPIPE_REG_BASE 0x74400
///                            ###
///                            * Base address for HDMIRX PIPE Registers
///                            * 1KB
///                            ###
///               : AVIO_HDMIRXPIPE_REG_SIZE 0x400
///                            ###
///                            * Size of HDMIRX PIPE Registers memory mapping
///                            ###
///               : AVIO_HDMIRXPIPE_REG_DEC_BIT 0xA
///                            ###
///                            * 1 KB has a 10 bits offset
///                            ###
///               : AVIO_HDMITX_WRAP_REG_BASE 0x74800
///                            ###
///                            * Base address of HDMITX Wrap control Registers
///                            * 1 KB
///                            ###
///               : AVIO_HDMITX_WRAP_REG_SIZE 0x400
///                            ###
///                            * Size of HDMITX Wrap registers
///                            ###
///               : AVIO_HDMITX_WRAP_REG_DEC_BIT 0xA
///                            ###
///                            * 1KB has a 10 bits offset
///                            ###
///               : AVIO_BCM_REG_BASE  0x74C00
///                            ###
///                            * AVIO BCM Registers
///                            * 512B
///                            ###
///               : AVIO_BCM_REG_SIZE  0x200
///                            ###
///                            * Size of AVIO BCM Registers
///                            ###
///               : AVIO_BCM_REG_DEC_BIT 0x9
///                            ###
///                            * 512B has 9-bit offset
///                            ###
///               : AVIO_SNPS_HDCP22_REG_BASE 0x75000
///                            ###
///                            * Base address of SNPS HDCP22 control Registers
///                            * 256B
///                            ###
///               : AVIO_SNPS_HDCP22_REG_SIZE 0x100
///                            ###
///                            * Size of HDCP22 registers
///                            ###
///               : AVIO_SNPS_HDCP22_REG_DEC_BIT 0x8
///                            ###
///                            * 256B has a 8 bits offset
///                            ###
///               : AVIO_SNPS_TRNG_REG_BASE 0x75400
///                            ###
///                            * Base address of SNPS TRNG control Registers
///                            * 128B
///                            ###
///               : AVIO_SNPS_TRNG_REG_SIZE 0x80
///                            ###
///                            * Size of TRNG registers
///                            ###
///               : AVIO_SNPS_TRNG_REG_DEC_BIT 0x7
///                            ###
///                            * 128B has a 7 bits offset
///                            ###
///               : AVIO_GBL_BASE      0x78000
///                            ###
///                            * Base address for AVIO Global Registers
///                            * 32 KB
///                            ###
///               : AVIO_GBL_SIZE      0x8000
///                            ###
///                            * Size of AVIO Global Registers
///                            ###
///               : AVIO_GBL_DEC_BIT   0xF
///                            ###
///                            * 32 KB has a 15-bit offset
///                            ###
///               : AVIO_RESERVED0_REG_BASE 0x80000
///                            ###
///                            * 512KB AVIO reserved space
///                            * 512KB
///                            ###
///               : AVIO_RESERVED0_REG_SIZE 0x80000
///                            ###
///                            * 512KB reserved0 size
///                            ###
///               : AVIO_RESERVED0_REG_DEC_BIT 0x13
///                            ###
///                            * 512KB has a 19 bits offset
///                            ###
///               : AVIO_RESERVED1_REG_BASE 0x100000
///                            ###
///                            * 1MB space reserved
///                            * 1MB
///                            ###
///               : AVIO_RESERVED1_REG_SIZE 0x100000
///                            ###
///                            * Size of reserved1 registers
///                            ###
///               : AVIO_RESERVED1_REG_DEC_BIT 0x14
///                            ###
///                            * 1MB has a 20 bits offset
///                            ###
///     # # ----------------------------------------------------------
/// $ENDOFINTERFACE  # size:       0B, bits:       0b, padding:     0B
////////////////////////////////////////////////////////////
#ifndef h_AVIO_MEMMAP
#define h_AVIO_MEMMAP (){}

    #define        AVIO_MEMMAP_VPP128B_DHUB_REG_BASE           0x0
    #define        AVIO_MEMMAP_VPP128B_DHUB_REG_SIZE           0x20000
    #define        AVIO_MEMMAP_VPP128B_DHUB_REG_DEC_BIT        0x11
    #define        AVIO_MEMMAP_AVIO_SNPS_HDMITX_REG_BASE       0x20000
    #define        AVIO_MEMMAP_AVIO_SNPS_HDMITX_REG_SIZE       0x20000
    #define        AVIO_MEMMAP_AVIO_SNPS_HDMITX_REG_DEC_BIT    0x11
    #define        AVIO_MEMMAP_AIO64B_DHUB_REG_BASE            0x40000
    #define        AVIO_MEMMAP_AIO64B_DHUB_REG_SIZE            0x10000
    #define        AVIO_MEMMAP_AIO64B_DHUB_REG_DEC_BIT         0x10
    #define        AVIO_MEMMAP_VPP_MP_REG_BASE                 0x50000
    #define        AVIO_MEMMAP_VPP_MP_REG_SIZE                 0x10000
    #define        AVIO_MEMMAP_VPP_MP_REG_DEC_BIT              0x10
    #define        AVIO_MEMMAP_VPP_GFX_VOP_REG_BASE            0x60000
    #define        AVIO_MEMMAP_VPP_GFX_VOP_REG_SIZE            0x10000
    #define        AVIO_MEMMAP_VPP_GFX_VOP_REG_DEC_BIT         0x10
    #define        AVIO_MEMMAP_VPP_REG_BASE                    0x70000
    #define        AVIO_MEMMAP_VPP_REG_SIZE                    0x4000
    #define        AVIO_MEMMAP_VPP_REG_DEC_BIT                 0xE
    #define        AVIO_MEMMAP_AVIO_I2S_REG_BASE               0x74000
    #define        AVIO_MEMMAP_AVIO_I2S_REG_SIZE               0x400
    #define        AVIO_MEMMAP_AVIO_I2S_REG_DEC_BIT            0xA
    #define        AVIO_MEMMAP_AVIO_HDMIRXPIPE_REG_BASE        0x74400
    #define        AVIO_MEMMAP_AVIO_HDMIRXPIPE_REG_SIZE        0x400
    #define        AVIO_MEMMAP_AVIO_HDMIRXPIPE_REG_DEC_BIT     0xA
    #define        AVIO_MEMMAP_AVIO_HDMITX_WRAP_REG_BASE       0x74800
    #define        AVIO_MEMMAP_AVIO_HDMITX_WRAP_REG_SIZE       0x400
    #define        AVIO_MEMMAP_AVIO_HDMITX_WRAP_REG_DEC_BIT    0xA
    #define        AVIO_MEMMAP_AVIO_BCM_REG_BASE               0x74C00
    #define        AVIO_MEMMAP_AVIO_BCM_REG_SIZE               0x200
    #define        AVIO_MEMMAP_AVIO_BCM_REG_DEC_BIT            0x9
    #define        AVIO_MEMMAP_AVIO_SNPS_HDCP22_REG_BASE       0x75000
    #define        AVIO_MEMMAP_AVIO_SNPS_HDCP22_REG_SIZE       0x100
    #define        AVIO_MEMMAP_AVIO_SNPS_HDCP22_REG_DEC_BIT    0x8
    #define        AVIO_MEMMAP_AVIO_SNPS_TRNG_REG_BASE         0x75400
    #define        AVIO_MEMMAP_AVIO_SNPS_TRNG_REG_SIZE         0x80
    #define        AVIO_MEMMAP_AVIO_SNPS_TRNG_REG_DEC_BIT      0x7
    #define        AVIO_MEMMAP_AVIO_GBL_BASE                   0x78000
    #define        AVIO_MEMMAP_AVIO_GBL_SIZE                   0x8000
    #define        AVIO_MEMMAP_AVIO_GBL_DEC_BIT                0xF
    #define        AVIO_MEMMAP_AVIO_RESERVED0_REG_BASE         0x80000
    #define        AVIO_MEMMAP_AVIO_RESERVED0_REG_SIZE         0x80000
    #define        AVIO_MEMMAP_AVIO_RESERVED0_REG_DEC_BIT      0x13
    #define        AVIO_MEMMAP_AVIO_RESERVED1_REG_BASE         0x100000
    #define        AVIO_MEMMAP_AVIO_RESERVED1_REG_SIZE         0x100000
    #define        AVIO_MEMMAP_AVIO_RESERVED1_REG_DEC_BIT      0x14
    ///////////////////////////////////////////////////////////

#endif
//////
/// ENDOFINTERFACE: AVIO_MEMMAP
////////////////////////////////////////////////////////////



#ifdef __cplusplus
  }
#endif
#pragma  pack()

#endif
//////
/// ENDOFFILE: avio_memmap.h
////////////////////////////////////////////////////////////

