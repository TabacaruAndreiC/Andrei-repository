#include "fourPlayersGame.h"
#include "SingleAnswer.h"

fourPlayersGame::fourPlayersGame(QWidget *parent)
	: QMainWindow(parent)
{
	m_4players.setupUi(this);
	fourPlayersGame::setFixedSize(1600, 900);

	SingleAnswer* singleAnswer = new SingleAnswer();
	singleAnswer->show();
}

fourPlayersGame::~fourPlayersGame()
{}

void fourPlayersGame::attackSelect4P()
{
	
}

void fourPlayersGame::on_poz0_0_clicked()
{
	i = 0;
	j = 0;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz0_1_clicked()
{
	i = 0;
	j = 1;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz0_2_clicked()
{
	i = 0;
	j = 2;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz0_3_clicked()
{
	i = 0;
	j = 3;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz0_4_clicked()
{
	i = 0;
	j = 4;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz0_5_clicked()
{
	i = 0;
	j = 5;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz1_0_clicked()
{
	i = 1;
	j = 0;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz1_1_clicked()
{
	i = 1;
	j = 1;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz1_2_clicked()
{
	i = 1;
	j = 2;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz1_3_clicked()
{
	i = 1;
	j = 3;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz1_4_clicked()
{
	i = 1;
	j = 4;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz1_5_clicked()
{
	i = 1;
	j = 5;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz2_0_clicked()
{
	i = 2;
	j = 0;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz2_1_clicked()
{
	i = 2;
	j = 1;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz2_2_clicked()
{
	i = 2;
	j = 2;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz2_3_clicked()
{
	i = 2;
	j = 3;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz2_4_clicked()
{
	i = 2;
	j = 4;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz2_5_clicked()
{
	i = 2;
	j = 5;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz3_0_clicked()
{
	i = 3;
	j = 0;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz3_1_clicked()
{
	i = 3;
	j = 1;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz3_2_clicked()
{
	i = 3;
	j = 2;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz3_3_clicked()
{
	i = 3;
	j = 3;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz3_4_clicked()
{
	i = 3;
	j = 4;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}
void fourPlayersGame::on_poz3_5_clicked()
{
	i = 3;
	j = 5;
	auto response = cpr::Get(
		cpr::Url{ "http://localhost:8080/poz" + std::to_string(i) + "/" + std::to_string(j) }
	);
}

