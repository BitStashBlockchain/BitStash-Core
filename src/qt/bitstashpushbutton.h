#ifndef STASHPUSHBUTTON_H
#define STASHPUSHBUTTON_H
#include <QPushButton>
#include <QStyleOptionButton>
#include <QIcon>

class BitStashPushButton : public QPushButton
{
public:
    explicit BitStashPushButton(QWidget * parent = Q_NULLPTR);
    explicit BitStashPushButton(const QString &text, QWidget *parent = Q_NULLPTR);

protected:
    void paintEvent(QPaintEvent *) Q_DECL_OVERRIDE;

private:
    void updateIcon(QStyleOptionButton &pushbutton);

private:
    bool m_iconCached;
    QIcon m_downIcon;
};

#endif // STASHPUSHBUTTON_H
