// Copyright (c) Microsoft Corporation.  All rights reserved.

#pragma once

#ifdef CORE_DEBUG_LEVEL
#undef CORE_DEBUG_LEVEL
#endif

//#define CORE_DEBUG_LEVEL 1
//#define CONFIG_LOG_DEFAULT_LEVEL 1

// NeoPixel shield always communicates over PIN6.  However, since we have a level-shifter
// between board-output to shield-input we must output over a different pin (PIN5)

#define PIXEL_TYPE NEO_GRBW + NEO_KHZ800

#define PIN       33
#define LAMP_COUNT 60
#define NEO_PIXEL_LAMP_UPDATE_LATENCY (0x04)
#define LAMP_NOT_PROGRAMMABLE 0x00
#define LAMP_IS_PROGRAMMABLE 0x01

#include <Adafruit_NeoPixel.h>
#include "BLEDevice.h"
#include "BLEServer.h"
#include "BLEUtils.h"
#include "BLECharacteristic.h"
#include "BLEHIDDevice.h"
#include "BLEValue.h"
#include "BLEDescriptor.h"
#include "BLE2904.h"

#include "Arduino.h"
#include <atomic>
#include "lampArrayReports.h"
#include "lampArrayHidDescriptor.h"
#include "lampArrayAttributes.h"
#include "lampArray.h"
