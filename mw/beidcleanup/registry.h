/* ****************************************************************************

 * eID Middleware Project.
 * Copyright (C) 2009-2010 FedICT.
 *
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License version
 * 3.0 as published by the Free Software Foundation.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this software; if not, see
 * http://www.gnu.org/licenses/.

**************************************************************************** */
#pragma once

bool RegistryKeyExist(HKEY hRootKey,const wchar_t *wzKey);
int RemoveRegistryKey(HKEY hRootKey,const wchar_t *wzKey);
int RemoveRegistryValue(HKEY hRootKey,const wchar_t *wzKey,const wchar_t *wzValue);
bool ReadRegistryKey(HKEY hRootKey,const wchar_t *wzKey,const wchar_t *wzName,wchar_t *valueBuffer);

int OpenSearchPattern(HKEY hRootKey,const wchar_t *wzKey,const wchar_t *wzGuidPattern);
bool NextSearchPattern(wchar_t *wzKey, int iKeyLen, int *nReturnCode);
void CloseSearchPattern();
