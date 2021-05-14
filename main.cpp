#include <QCoreApplication>
#include <QTextStream>
#include <QDebug>

void write(const char* text="", const int enter=0);
QTextStream output(stdout);
QTextStream input(stdin);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    char command[]="";
    while (QString(command)!="exit"){
        write("Scan code: ");
        input >> command;
        QString f = command;
        qDebug() << "Code = " << f;
        if(f == "2700000137253") qDebug() << "uraaaaaaaaaaaaaa";
    }

    return a.exec();
}

void write(const char* text, const int enter){
    output << QString::fromUtf8(text);
    for (int i(0); i<=enter-1; i++){
           output  << "\n";
    }
    output.flush();
}
