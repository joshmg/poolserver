/*
* Copyright (c) 2013-2017, The PurpleI2P Project
*
* This file is part of Purple i2pd project and licensed under BSD3
*
*/

#ifndef GOST_H__
#define GOST_H__

#include <inttypes.h>

namespace i2p
{
namespace crypto
{

// Big Endian
	void GOSTR3411_2012_256 (const uint8_t * buf, size_t len, uint8_t * digest);
	void GOSTR3411_2012_512 (const uint8_t * buf, size_t len, uint8_t * digest);	
}
}

#endif
