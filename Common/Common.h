///////////
// This file is a part of the ATools project
// Some parts of code are the property of Microsoft, Qt or Aeonsoft
// The rest is released without license and without any warranty
///////////

#ifndef COMMON_H
#define COMMON_H

#define VERSION		1
#define SUB_VERSION	2

// pour les defines en .h
// d�termine la version du GUIEditor aussi
#define __VER	15

#define QT_MESSAGELOGCONTEXT

#include <QtWidgets>
#include <qmath.h>
#include <d3dx9.h>

#ifdef GetObject
#undef GetObject
#endif // GetObject

#define null 0

typedef unsigned char byte;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef QString string;
typedef uint64_t objid;

class CTexture;
class CMotion;
class CSkeleton;
class CObject3D;
class CSfx;
class CTextFile;

struct Bounds
{
	D3DXVECTOR3 Min;
	D3DXVECTOR3 Max;
};

template<class T> void Delete(T*& val)
{
	delete val;
	val = null;
}

template<class T> void DeleteArray(T*& val)
{
	delete[] val;
	val = null;
}

template<class T> void Release(T*& val)
{
	if (val)
	{
		val->Release();
		val = null;
	}
}

void InstallMsgHandler();

string GetExtension(const string& filename);

float RoundFloat(float value, float round);

#include "PtrArray.h"
#include "File.h"
#include <define.h>
#include <defineNeuz.h>
#include <lang.h>

#endif // COMMON_H