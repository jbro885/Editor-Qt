/*
 * This file is part of EasyRPG Editor.
 *
 * EasyRPG Editor is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EasyRPG Editor is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with EasyRPG Editor. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <QWidget>
#include <lcf/rpg/enemy.h>

class ProjectData;

namespace Ui {
class EnemyWidget;
}

class EnemyWidget : public QWidget
{
	Q_OBJECT

public:
	using value_type = lcf::rpg::Enemy;

	explicit EnemyWidget(ProjectData& project, QWidget *parent = nullptr);
	~EnemyWidget();

	void setData(lcf::rpg::Enemy* enemy);

private:
	Ui::EnemyWidget *ui;
	ProjectData& m_project;
};

