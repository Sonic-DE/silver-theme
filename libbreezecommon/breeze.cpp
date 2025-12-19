/*
 * SPDX-FileCopyrightText: 2023 Paul A McAuley <kde@paulmcauley.com>
 *
 * SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only OR LicenseRef-KDE-Accepted-GPL
 */

#include "breeze.h"

namespace Breeze
{

QString klassyLongVersion()
{
    QString version;

    version = QStringLiteral(KLASSY_VERSION);
#if KLASSY_GIT_MASTER
    version += QStringLiteral(".git");
#endif
    return version;
}

}
