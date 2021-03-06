/*
*   Copyright (C) {2015}  {VK, Charles TheHouse}
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see [http://www.gnu.org/licenses/].
*
*   Contact at:
*/
#include "ProcessClientMessage.h"

void Exec_MSG_CapsuleInfo(int conn, char *pMsg)
{
	MSG_STANDARDPARM *m = (MSG_STANDARDPARM*)pMsg;

	int Index = m->Parm;

	m->ID = conn;
	m->Type = _MSG_DBCapsuleInfo;

	DBServerSocket.SendOneMessage((char*)m, sizeof(MSG_STANDARDPARM));
}
