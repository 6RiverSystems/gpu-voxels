// this is for emacs file handling -*- mode: c++; indent-tabs-mode: nil -*-

// -- BEGIN LICENSE BLOCK ----------------------------------------------
// This file is part of the IC Workspace.
//
// This program is free software licensed under the CDDL
// (COMMON DEVELOPMENT AND DISTRIBUTION LICENSE Version 1.0).
// You can find a copy of this license in LICENSE.txt in the top
// directory of the source code.
//
// © Copyright 2014 FZI Forschungszentrum Informatik, Karlsruhe, Germany
//

// -- END LICENSE BLOCK ------------------------------------------------

//----------------------------------------------------------------------
/*!\file
 *
 * \author  Klaus Uhl <uhl@fzi.de>
 * \date    2008-01-28
 *
 * \brief   Win32 implementation of the global functions
 *          for string manipulation,
 */
//----------------------------------------------------------------------
#ifndef ICL_CORE_OS_WIN32_STRING_H_INCLUDED
#define ICL_CORE_OS_WIN32_STRING_H_INCLUDED

#include "icl_core/ImportExport.h"

namespace icl_core {
namespace os {
namespace hidden_win32 {

ICL_CORE_IMPORT_EXPORT char *stpcpy(char *dst, const char *src);
ICL_CORE_IMPORT_EXPORT char *strdup(const char *s);
ICL_CORE_IMPORT_EXPORT int vsnprintf(char *buffer, size_t maxlen, const char *format, va_list argptr);

}
}
}

#endif
