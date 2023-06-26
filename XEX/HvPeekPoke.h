#pragma once
#include "stdafx.h"

#ifndef _HV_PEEKPOKE_H
#define _HV_PEEKPOKE_H

typedef unsigned __int64 QWORD;

const BYTE HvPeekPokeExp[] = {
	0x48, 0x58, 0x50, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x34, 0x1F, 0xD6, 0xDA,
	0x2F, 0xCA, 0xA8, 0x17, 0xF0, 0x30, 0xCC, 0x44, 0x0A, 0x41, 0xFA, 0x7C, 0xA0, 0xC1, 0xFD, 0x33,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x7A, 0x02, 0x59, 0x43, 0x9E, 0xE6, 0x93, 0xD5, 0x01, 0xC9, 0x48, 0x4D, 0xB2, 0xBF, 0x9D, 0x18,
	0xA9, 0x16, 0x5E, 0xFF, 0x1E, 0xD5, 0xB6, 0xA8, 0x79, 0x60, 0xA8, 0x2F, 0xC1, 0x8D, 0x20, 0x8A,
	0xEB, 0x46, 0xC3, 0x01, 0xEC, 0xC4, 0xDB, 0xDF, 0xA1, 0x04, 0xD1, 0xDF, 0x23, 0x69, 0x5E, 0xCC,
	0x50, 0xC3, 0xF4, 0xDD, 0xA4, 0x80, 0x7D, 0x05, 0x2D, 0x57, 0xFF, 0x60, 0xA5, 0x58, 0x69, 0x27,
	0x9A, 0x33, 0x70, 0xE8, 0xC2, 0x82, 0xDC, 0xDA, 0xE2, 0x4D, 0xE1, 0xF8, 0xA1, 0xD2, 0xCC, 0x8D,
	0x98, 0x05, 0xD1, 0xA3, 0x2E, 0x37, 0x06, 0x0F, 0xF7, 0xEF, 0x70, 0xEF, 0x28, 0xD7, 0xAE, 0xD5,
	0x5B, 0x19, 0x1B, 0x13, 0x50, 0x0D, 0x15, 0x00, 0x92, 0x01, 0xEE, 0x38, 0xA7, 0x61, 0xB1, 0xA1,
	0x27, 0xBF, 0xB0, 0x42, 0x0F, 0x07, 0xC3, 0x8F, 0x78, 0xAD, 0xAF, 0x87, 0x8F, 0x34, 0x8A, 0xA6,
	0x69, 0x7D, 0x40, 0xB6, 0x5C, 0x9E, 0x01, 0xEC, 0x9F, 0x5E, 0x78, 0x30, 0x09, 0x5A, 0x21, 0xFF,
	0x35, 0x8C, 0x13, 0xBE, 0xBC, 0x92, 0x67, 0xE3, 0x17, 0x0B, 0x09, 0x1C, 0xE2, 0x9D, 0xEC, 0xFD,
	0xFB, 0x6C, 0x49, 0x3A, 0xCC, 0xE7, 0x99, 0xB6, 0xB3, 0x8A, 0x8F, 0xEF, 0xF7, 0xA0, 0x28, 0x4F,
	0x72, 0xC7, 0x3D, 0xD7, 0xCC, 0xEB, 0xB2, 0x1B, 0x74, 0x93, 0xD7, 0x02, 0x05, 0xD5, 0xE1, 0x25,
	0x35, 0xD7, 0xE0, 0x50, 0xEA, 0xCF, 0x82, 0x69, 0xE3, 0x3B, 0x6F, 0xFA, 0x13, 0xF0, 0x5B, 0xD9,
	0x1A, 0xB0, 0xD3, 0x0B, 0x85, 0x4D, 0x6A, 0xFC, 0x31, 0x45, 0xC3, 0xA3, 0xFA, 0x7E, 0xDA, 0x93,
	0x84, 0xD4, 0xE7, 0xFA, 0xAB, 0x7C, 0x22, 0x96, 0x54, 0x69, 0x7F, 0xC9, 0xF8, 0xC4, 0x5A, 0xC2,
	0x82, 0x99, 0x34, 0x46, 0x81, 0x6F, 0x06, 0x33, 0x19, 0x94, 0x74, 0xA4, 0x76, 0x02, 0x4F, 0xB9,
	0x48, 0x56, 0x50, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x60, 0x00, 0x00, 0x01, 0x90,
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x7D, 0x88, 0x02, 0xA6, 0xFB, 0xE1, 0xFF, 0xF0, 0xF9, 0x81, 0xFF, 0xF8, 0x94, 0x21, 0xFF, 0x00,
	0x7C, 0x9F, 0x23, 0x78, 0x2C, 0x1F, 0x00, 0x00, 0x41, 0x82, 0x00, 0xC0, 0x2C, 0x1F, 0x00, 0x01,
	0x41, 0x82, 0x00, 0xC0, 0x2C, 0x1F, 0x00, 0x02, 0x41, 0x82, 0x00, 0xC0, 0x2C, 0x1F, 0x00, 0x03,
	0x41, 0x82, 0x00, 0xC0, 0x2C, 0x1F, 0x00, 0x0A, 0x41, 0x82, 0x00, 0x64, 0x2C, 0x1F, 0x00, 0x05,
	0x41, 0x82, 0x00, 0xD4, 0x2C, 0x1F, 0x00, 0x06, 0x41, 0x82, 0x00, 0xD4, 0x2C, 0x1F, 0x00, 0x07,
	0x41, 0x82, 0x00, 0xD4, 0x2C, 0x1F, 0x00, 0x08, 0x41, 0x82, 0x00, 0xD4, 0x2C, 0x1F, 0x00, 0x0B,
	0x40, 0x80, 0x00, 0x00, 0x80, 0x60, 0x00, 0x4C, 0x7C, 0x62, 0x1A, 0x14, 0x80, 0x63, 0x00, 0x08,
	0x7C, 0x69, 0x03, 0xA6, 0x7C, 0xC3, 0x33, 0x78, 0x38, 0x80, 0x00, 0x01, 0x4E, 0x80, 0x04, 0x21,
	0x7C, 0x66, 0x1B, 0x78, 0x7C, 0xE9, 0x03, 0xA6, 0x2C, 0x1F, 0x00, 0x04, 0x41, 0x82, 0x00, 0x6C,
	0x2C, 0x1F, 0x00, 0x09, 0x41, 0x82, 0x00, 0xA0, 0x48, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x05,
	0x7C, 0xA6, 0x2B, 0x78, 0x3C, 0x80, 0x7C, 0x60, 0x50, 0xA6, 0x54, 0x6A, 0x60, 0x84, 0x02, 0xA6,
	0x50, 0xC4, 0x32, 0xE8, 0x7C, 0x68, 0x02, 0xA6, 0x38, 0x63, 0x00, 0x30, 0x90, 0x83, 0x00, 0x00,
	0x7C, 0x00, 0x18, 0x6C, 0x7C, 0x00, 0x1F, 0xAC, 0x7C, 0x00, 0x04, 0xAC, 0x4C, 0x00, 0x01, 0x2C,
	0x7C, 0x79, 0x4A, 0xA6, 0x48, 0x00, 0x00, 0x98, 0x88, 0x65, 0x00, 0x00, 0x48, 0x00, 0x00, 0x90,
	0xA0, 0x65, 0x00, 0x00, 0x48, 0x00, 0x00, 0x88, 0x80, 0x65, 0x00, 0x00, 0x48, 0x00, 0x00, 0x80,
	0xE8, 0x65, 0x00, 0x00, 0x48, 0x00, 0x00, 0x78, 0x8B, 0xE5, 0x00, 0x00, 0x9B, 0xE6, 0x00, 0x00,
	0x38, 0xA5, 0x00, 0x01, 0x38, 0xC6, 0x00, 0x01, 0x42, 0x00, 0xFF, 0xF0, 0x38, 0x60, 0x00, 0x00,
	0x48, 0x00, 0x00, 0x5C, 0x98, 0xC5, 0x00, 0x00, 0x48, 0x00, 0x00, 0x40, 0xB0, 0xC5, 0x00, 0x00,
	0x48, 0x00, 0x00, 0x38, 0x90, 0xC5, 0x00, 0x00, 0x48, 0x00, 0x00, 0x30, 0xF8, 0xC5, 0x00, 0x00,
	0x48, 0x00, 0x00, 0x28, 0x8B, 0xE6, 0x00, 0x00, 0x9B, 0xE5, 0x00, 0x00, 0x7C, 0x00, 0x28, 0x6C,
	0x7C, 0x00, 0x2F, 0xAC, 0x7C, 0x00, 0x04, 0xAC, 0x4C, 0x00, 0x01, 0x2C, 0x38, 0xA5, 0x00, 0x01,
	0x38, 0xC6, 0x00, 0x01, 0x42, 0x00, 0xFF, 0xE0, 0x38, 0x60, 0x00, 0x00, 0x7C, 0x00, 0x28, 0x6C,
	0x7C, 0x00, 0x2F, 0xAC, 0x7C, 0x00, 0x04, 0xAC, 0x4C, 0x00, 0x01, 0x2C, 0x38, 0x21, 0x01, 0x00,
	0xEB, 0xE1, 0xFF, 0xF0, 0xE9, 0x81, 0xFF, 0xF8, 0x7D, 0x88, 0x03, 0xA6, 0x4E, 0x80, 0x00, 0x20

};

typedef enum _PEEK_POKE_TYPE {
	PEEK_BYTE  = 0,
	PEEK_WORD  = 1,
	PEEK_DWORD = 2,
	PEEK_QWORD = 3,
	PEEK_BYTES = 4,
	POKE_BYTE  = 5,
	POKE_WORD  = 6,
	POKE_DWORD = 7,
	POKE_QWORD = 8,
	POKE_BYTES = 9,
	PEEK_SPR   = 10
} PEEK_POKE_TYPE;
	
#define HvPeekPokeExpID 0x48565050
	
HRESULT InitializeHvPeekPoke();
	
BYTE    HvPeekBYTE(QWORD Address);
WORD    HvPeekWORD(QWORD Address);
DWORD   HvPeekDWORD(QWORD Address);
QWORD   HvPeekQWORD(QWORD Address);
HRESULT HvPeekBytes(QWORD Address, PVOID Buffer, DWORD Size);
HRESULT ProcessCPUKey();
HRESULT HvPokeBYTE(QWORD Address, BYTE Value);
HRESULT HvPokeWORD(QWORD Address, WORD Value);
HRESULT HvPokeDWORD(QWORD Address, DWORD Value);
HRESULT HvPokeQWORD(QWORD Address, QWORD Value);
HRESULT HvPokeBytes(QWORD Address, const void* Buffer, DWORD Size);
VOID SpoofyPatch();
QWORD HvGetFuseLine(BYTE fuseIndex);

#endif // _HV_PEEKPOKE_H