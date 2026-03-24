/*
 * SPDX-FileCopyrightText: 2022 Paul A McAuley <kde@paulmcauley.com>
 * SPDX-FileCopyrightText: 2026 Joseph Crowell <joseph.w.crowell@gmail.com>
 *
 * SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only OR LicenseRef-KDE-Accepted-GPL
 */

#pragma once

#include "renderdecorationbuttonicon18by18.h"

#include <QPainter>

namespace Breeze
{

class RenderStyleSilver18By18 : public RenderDecorationButtonIcon18By18
{
public:
    RenderStyleSilver18By18(QPainter *painter,
                            const bool fromKstyle,
                            const bool boldButtonIcons,
                            const qreal devicePixelRatio,
                            const QPointF &deviceOffsetTitleBarTopLeftToIconTopLeft,
                            const bool forceEvenSquares)
        : RenderDecorationButtonIcon18By18(painter, fromKstyle, boldButtonIcons, devicePixelRatio, deviceOffsetTitleBarTopLeftToIconTopLeft, forceEvenSquares) {
        };

    void renderCloseIcon() override;
    void renderMaximizeIcon() override;
    void renderFloatIcon() override;
    void renderMinimizeIcon() override;

private:
};

}
