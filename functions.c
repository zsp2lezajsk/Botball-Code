int lewo = 0;
int prawo = 1;

void go(int moc,int czas){
    motor(lewo, moc);
    motor(prawo, moc);
    msleep(czas);
    freeze(lewo);
    freeze(prawo);
    msleep(1000);
}

void goLL(int moc){
    while(analog(lewo) < 2000){
        motor(prawo, moc);
        motor(lewo, moc);
        msleep(10);
    }
    
    freeze(lewo);
    freeze(prawo);
    msleep(1000);
}

void goLP(int moc){
    while(analog(prawo) < 2000){
        motor(prawo, moc);
        motor(lewo, moc);
        msleep(10);
    }
    freeze(lewo);
    freeze(prawo);
    msleep(1000);
}

void goBL(int moc){
    while(analog(lewo) > 2000){
        motor(prawo, moc);
        motor(lewo, moc);
        msleep(10);
    }
    freeze(lewo);
    freeze(prawo);
    msleep(1000);
}

void goBP(int moc){
    while(analog(prawo) > 2000){
        motor(prawo, moc);
        motor(lewo, moc);
        msleep(10);
    }
    freeze(lewo);
    freeze(prawo);
    msleep(1000);
}


void followL(int moc){
        if(analog(lewo)<2000){
            motor(lewo, moc + 20);
            motor(prawo, moc);
            msleep(10);
        }
        else{
            motor(lewo, moc);
            motor(prawo, moc + 20);
        }
}

void followP(int moc){
        if(analog(prawo)<2000){
            motor(lewo, moc);
            motor(prawo, moc + 60);
            msleep(10);
        }
        else{
            motor(lewo, moc + 20);
            motor(prawo, moc);
        }
}

        
    
    
    