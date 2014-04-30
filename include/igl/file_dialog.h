// This file is part of libigl, a simple c++ geometry processing library.
// 
// Copyright (C) 2014 Daniele Panozzo <daniele.panozzo@gmail.com>
// 
// This Source Code Form is subject to the terms of the Mozilla Public License 
// v. 2.0. If a copy of the MPL was not distributed with this file, You can 
// obtain one at http://mozilla.org/MPL/2.0/.
#ifndef IGL_FILE_DIALOG_H
#define IGL_FILE_DIALOG_H

#include <stdio.h>
#include <string>

#ifdef _WIN32
 #include <Commdlg.h>
#endif

namespace igl
{

// Returns a string with a path to an existing file
// The string is returned empty if no file is selected
// (on Linux machines, it assumes that Zenity is installed)
//
// Usage:
//   std::string str = get_open_file_path();
std::string IGL_INLINE file_dialog_open();

// Returns a string with a path to a new/existing file
// The string is returned empty if no file is selected
// (on Linux machines, it assumes that Zenity is installed)
//
// Usage:
//   char buffer[FILE_DIALOG_MAX_BUFFER];
//   get_save_file_path(buffer);
std::string IGL_INLINE file_dialog_save();

}

#ifdef IGL_HEADER_ONLY
#  include "file_dialog.cpp"
#endif

#endif
