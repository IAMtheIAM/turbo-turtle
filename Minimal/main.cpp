#include <QApplication>
#include <QtWidgets>
#include <QtCore>

int main(int argc, char *argv[])
{
   QApplication app(argc, argv);

   QWidget *window = new QWidget;
   window->setWindowTitle("My App");

   QGridLayout *layout = new QGridLayout;

   QLabel *labelName = new QLabel("Name:");
   QLineEdit *textName = new QLineEdit;

   QLabel *labelName2 = new QLabel("Name:");
   QLineEdit *textName2 = new QLineEdit;

   layout->addWidget(labelName, 0,0);
   layout->addWidget(textName, 0,1);

   layout->addWidget(labelName2, 1,0);
   layout->addWidget(textName2, 1,1);

   QPushButton *buttonOk = new QPushButton("OK");
   QPushButton *buttonCancel = new QPushButton("Cancel");

   layout->addWidget(buttonOk,2,0,1,2 );
   layout->addWidget(buttonCancel,3,0,1,2 );

   window->setLayout(layout);
   window->show();
   return app.exec();

}
