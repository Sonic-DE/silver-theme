/*
 * SPDX-FileCopyrightText: 2023 Paul A McAuley <kde@paulmcauley.com>
 * SPDX-FileCopyrightText: 2026 Joseph Crowell <joseph.w.crowell@gmail.com>
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include "ui_addpreset.h"
#include <QDialog>

namespace Breeze
{

class AddPreset : public QDialog
{
    Q_OBJECT

    friend class LoadPreset;

public:
    explicit AddPreset(QWidget *parent = nullptr);
    ~AddPreset();

Q_SIGNALS:
    void importClicked();

private:
    Ui_AddPreset *m_ui;
    void importButtonClicked();
};

}
