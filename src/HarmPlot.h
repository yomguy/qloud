/*
	Copyright (C) 2006 Andrew Gaydenko <a@gaydenko.com>

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef HARMPLOT_H
#define HARMPLOT_H

#include <QtWidgets>
#include <QtCharts/QtCharts>
#include "QLE.h"
#include "IRInfo.h"
#include "HarmData.h"

class HarmPlot: public QChartView {
	Q_OBJECT

public:
	HarmPlot(const QString& dir, IRInfo ii, QWidget *parent = 0);
	~HarmPlot();

private:
	QString dir;
	IRInfo ii;

	HarmData** data;
	void addCurves(QAbstractAxis *x, QAbstractAxis *y);
	QChart *chart;
};

#endif
