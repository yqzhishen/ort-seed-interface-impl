#pragma once

#ifdef _WIN32
#  define COM_DECL_EXPORT __declspec(dllexport)
#  define COM_DECL_IMPORT __declspec(dllimport)
#else
#  define COM_DECL_EXPORT
#  define COM_DECL_IMPORT
#endif

#define COM_EXTERN_C extern "C"
#define COM_EXTERN_C_EXPORT COM_EXTERN_C COM_DECL_EXPORT
#define COM_EXTERN_C_IMPORT COM_EXTERN_C COM_DECL_IMPORT
#define COM_EXTERN_C_BEGIN COM_EXTERN_C {
#define COM_EXTERN_C_END }

#define _TO_UNICODE(y) L##y
#define TO_UNICODE(x) _TO_UNICODE(x)
