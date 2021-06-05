#ifndef NODE_H
#define NODE_H

#include <QString>

class Node
{
public:
    Node(QString, QString, QString, bool, bool, int *);

    Node *prev, *next;

    QString surname;
    QString name;
    QString patronim;
    bool missedExam = false;
    bool thisUniversity = true;    
    int *marks;

    double averagePoint;
};

#endif // NODE_H
