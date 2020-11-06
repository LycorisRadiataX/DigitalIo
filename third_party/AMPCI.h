//*********************************************************************
// Version: V1.0
// Name: DLL9110.H
// This Header File defines DLL9110.DLL application interface
// this interface can be included by C or C++ code
// Date: 2002.11.17
// At: BUAA 
//*********************************************************************
//#ifndef DLL9110.H
//#define DLL9110.H

#ifdef __cplusplus    //!!!!
extern "C" {          //!!!!
#endif                //!!!

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif

#ifndef	PLX9052_DEFAULT_VENDOR_ID
#define	PLX9052_DEFAULT_VENDOR_ID		0x10B5
#endif

#ifndef	PLX9052_DEFAULT_DEVICE_ID
#define	PLX9052_DEFAULT_DEVICE_ID		0x9050
#endif

#ifndef	PLX9052_DEFAULT_AD_BAR
enum {
    PLX9052_AD_BAR0 = 0,
    PLX9052_AD_BAR1 = 1,
    PLX9052_AD_BAR2 = 2,
    PLX9052_AD_BAR3 = 3,
    PLX9052_AD_BAR4 = 4,
    PLX9052_AD_BAR5 = 5,
    PLX9052_AD_BAR_EPROM = 6,
    PLX9052_AD_BARS = 7
};
#define PLX9052_DEFAULT_AD_BAR	PLX9052_AD_BAR3
#endif


WORD __stdcall  PLX9052_CountCards(DWORD VendorID, DWORD DeviceID);
BOOL __stdcall  PLX9052_Open(HANDLE *phPLX9052, DWORD VendorID, DWORD DeviceID, DWORD nCardNum, DWORD Options);
WORD __stdcall  PLX9052_ReadWord(HANDLE hPLX9052, DWORD addrSpace, DWORD Offset);
void __stdcall  PLX9052_WriteWord(HANDLE hPLX9052, DWORD addrSpace, DWORD Offset, WORD data);
void __stdcall  PLX9052_Close(HANDLE hPLX9052);

#ifdef __cplusplus   //!!!!
}                    //!!!!
#endif               //!!!!



//#endif
