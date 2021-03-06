/****************************************
 *
 *   INSERT-PROJECT-NAME-HERE - INSERT-GENERIC-NAME-HERE
 *   Copyright (C) 2019 Victor Tran
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
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * *************************************/
#ifndef GRAPHWIDGET_H
#define GRAPHWIDGET_H

#include <QWidget>
#include <QMenu>

namespace Ui {
    class GraphWidget;
}

struct GraphWidgetPrivate;

class GraphWidget : public QWidget
{
        Q_OBJECT

    public:
        explicit GraphWidget(QWidget *parent = nullptr);
        ~GraphWidget();

        QMenu* getMenu();

    private slots:
        void on_addEquationButton_clicked();

        void on_centerXBox_valueChanged(double arg1);

        void on_centerYBox_valueChanged(double arg1);

        void on_scaleXBox_valueChanged(double arg1);

        void on_scaleYBox_valueChanged(double arg1);

        void on_equationsList_customContextMenuRequested(const QPoint &pos);

        void on_graphicsView_readyChanged(bool );

    private:
        Ui::GraphWidget *ui;

        GraphWidgetPrivate* d;
};

#endif // GRAPHWIDGET_H
