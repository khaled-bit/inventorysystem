#include "inventorysystem.h"
#include <QtWidgets/QApplication>
#include <QtSql\qsql.h>
#include <QtSql\qsqldatabase.h>
#include <QtSql/qsqlerror.h>
#include <QtSql/qsqldriver.h>

int main(int argc, char *argv[])
{
    QSqlDatabase db = QSqlDatabase::addDatabase("Company_SD");
    db.setDatabaseName("C:\\Program Files\\Microsoft SQL Server\\MSSQL11.MSSQLSERVER\\MSSQL\\DATA\\qt_test_db");
    QApplication a(argc, argv);
    inventorysystem w;
    w.show();
    return a.exec();
}
