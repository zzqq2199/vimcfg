Vim�UnDo� ����鄘#Hv,�����L��u�%��̑	�                    =       =   =   =    XϿ�    _�                             ����                                                                                                                                                                                                                                                                                                                                                             XϹ�     �          U      #include <iostream>5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             XϹ�     �          V       5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             XϹ�     �         W          int getinput(int from, int to){5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             XϹ�     �         V      int getinput(int from, int to){5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             XϹ�     �                 5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             XϹ�     �                ;    cout<<"Enter your choose ("<<from<<"~"<<to<<"):"<<endl;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             XϹ�     �                    while (1){5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             XϹ�     �                        int c;5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             XϹ�     �                        cin>>c;5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                             XϹ�     �                        if (c>=from && c<=to)5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                             XϹ�     �                            return c;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             XϹ�     �                #        cout<<"Enter again:"<<endl;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             XϹ�     �                    }5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             XϺ      �                }5�_�                            ����                                                                                                                                                                                                                                                                                                                                       L           v        XϺ     �              6       int dsp(interface itf){       while(1){   +        cout<<endl<<endl<<endl<<endl<<endl;   0        cout<<"====="<<itf.title<<"====="<<endl;           options* pop=&itf.ops;           int cnt=0;           int (*funcs[10])();   
        do   	        {   "            cout<<'['<<++cnt<<']';               funcs[cnt]=pop->p;   %            cout<<pop->op_name<<endl;   !            pop=pop->next;                  }while (pop);           cout<<"[0]Exit"<<endl;   #        int chosen=getinput(0,cnt);   *        cout<<"you choose "<<chosen<<endl;           if (chosen==0)               return 0;           else{               funcs[chosen]();   	        }       }   }   int confirmPasswd(){   )    cout<<"Please enter password:"<<endl;       string passwd;       cin>>passwd;       if (passwd=="hijklmn"){            dsp(adminFuncList);            }       else           return 0;   }       int main(){           mainMemu.title="main memu";       options* pop=&mainMemu.ops;   !    pop->op_name="administrator";       pop->p=confirmPasswd;   0    pop->next=(options*)malloc(sizeof(options));       pop=pop->next;       pop->op_name="customers";       (    adminFuncList.title="function list";       pop=&adminFuncList.ops;       pop->op_name="inspect";              dsp(mainMemu);           return 0;   }5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  v        XϺ    �                  5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             XϺ_     �                #ifndef DISPLAY_H_5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             XϺb     �                #ifndef DSP_H_   #define DISPLAY_H_5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             XϺe     �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             XϺg     �                !#ifndef DSP_H_ #define DISPLAY_H_5�_�                       	    ����                                                                                                                                                                                                                                                                                                                                                             XϺh     �                !#ifndef DSP_H_ #define DISPLAY_H_5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             XϺi     �                !#ifndef DSP_H_ #define DISPLAY_H_5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             XϺp     �                 &#ifndef DISPLAY_H_dd#define DISPLAY_H_5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             XϺr     �                 5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             XϺ    �                �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  v        XϻH    �                 interface mainMemu;   interface adminFuncList;       #endif5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             XϾ�     �      E          �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             XϾ�     �                ;    cout<<"Enter your choose ("<<from<<"~"<<to<<"):"<<endl;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             XϾ�     �                    while (1){5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             XϾ�     �                        int c;5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             XϾ�     �                        cin>>c;5�_�      !                      ����                                                                                                                                                                                                                                                                                                                                                             XϾ�     �                        if (c>=from && c<=to)5�_�       "           !          ����                                                                                                                                                                                                                                                                                                                                                             XϾ�     �                            return c;5�_�   !   #           "          ����                                                                                                                                                                                                                                                                                                                                                             XϾ�     �                #        cout<<"Enter again:"<<endl;5�_�   "   $           #          ����                                                                                                                                                                                                                                                                                                                                                             XϾ�     �                    }5�_�   #   &           $           ����                                                                                                                                                                                                                                                                                                                                                             XϾ�     �                }5�_�   $   (   %       &           ����                                                                                                                                                                                                                                                                                                                                       -          v       XϾ�     �         <          while(1){   +        cout<<endl<<endl<<endl<<endl<<endl;   0        cout<<"====="<<itf.title<<"====="<<endl;           options* pop=&itf.ops;           int cnt=0;           int (*funcs[10])();   
        do   	        {   "            cout<<'['<<++cnt<<']';               funcs[cnt]=pop->p;   %            cout<<pop->op_name<<endl;   !            pop=pop->next;                  }while (pop);           cout<<"[0]Exit"<<endl;   #        int chosen=getinput(0,cnt);   *        cout<<"you choose "<<chosen<<endl;           if (chosen==0)               return 0;           else{               funcs[chosen]();   	        }       }   }   int confirmPasswd(){5�_�   &   )   '       (           ����                                                                                                                                                                                                                                                                                                                                                   v        XϾ�     �         %   	   )    cout<<"Please enter password:"<<endl;       string passwd;       cin>>passwd;       if (passwd=="hijklmn"){            dsp(adminFuncList);            }       else           return 0;   }5�_�   (   *           )           ����                                                                                                                                                                                                                                                                                                                                                  v        XϾ�     �                5�_�   )   +           *           ����                                                                                                                                                                                                                                                                                                                                                  v        XϾ�     �                5�_�   *   ,           +           ����                                                                                                                                                                                                                                                                                                                                                  v        XϾ�     �                 5�_�   +   -           ,           ����                                                                                                                                                                                                                                                                                                                                                  v        XϾ�     �                     mainMemu.title="main memu";       options* pop=&mainMemu.ops;   !    pop->op_name="administrator";   #endif5�_�   ,   .           -           ����                                                                                                                                                                                                                                                                                                                                                  v        XϾ�    �                 endif5�_�   -   /           .          ����                                                                                                                                                                                                                                                                                                                                                  v        XϾ�     �               int dsp(interface itf){5�_�   .   0           /          ����                                                                                                                                                                                                                                                                                                                                                  v        XϾ�     �               int confirmPasswd(){5�_�   /   1           0          ����                                                                                                                                                                                                                                                                                                                                                  v        XϾ�     �               int initializeDsp(){5�_�   0   2           1          ����                                                                                                                                                                                                                                                                                                                                                  v        XϾ�     �               int dsp(interface itf)5�_�   1   3           2          ����                                                                                                                                                                                                                                                                                                                                                  v        XϾ�     �               int getinput(int from, int to){5�_�   2   4           3           ����                                                                                                                                                                                                                                                                                                                                                  v        XϾ�    �                 5�_�   3   5           4          ����                                                                                                                                                                                                                                                                                                                                                  v        XϾ�    �               int dsp(interface itf)5�_�   4   6           5          ����                                                                                                                                                                                                                                                                                                                                                  v        XϾ�   	 �               int getinput(int from, int to)5�_�   5   7           6          ����                                                                                                                                                                                                                                                                                                                                                             XϿ     �               int getinput(int from, int to)5�_�   6   8           7          ����                                                                                                                                                                                                                                                                                                                                                             XϿ     �               int confirmPasswd()�               int dsp(interface)5�_�   7   9           8          ����                                                                                                                                                                                                                                                                                                                                                             XϿ    �               int initializeDsp()5�_�   8   :           9          ����                                                                                                                                                                                                                                                                                                                                                             XϿ�     �                �             5�_�   9   ;           :          ����                                                                                                                                                                                                                                                                                                                                                             XϿ�     �               int confirmName5�_�   :   <           ;          ����                                                                                                                                                                                                                                                                                                                                                             XϿ�     �               int confirmName()5�_�   ;   =           <          ����                                                                                                                                                                                                                                                                                                                                                             XϿ�     �               int confirmCustomerName5�_�   <               =          ����                                                                                                                                                                                                                                                                                                                                                             XϿ�    �               int confirmCustomerName()5�_�   &           (   '           ����                                                                                                                                                                                                                                                                                                                                       /           v       XϾ�     �      "   %      int initializeDsp(){�             �                   while(1){   +        cout<<endl<<endl<<endl<<endl<<endl;   0        cout<<"====="<<itf.title<<"====="<<endl;           options* pop=&itf.ops;           int cnt=0;           int (*funcs[10])();   
        do   	        {   "            cout<<'['<<++cnt<<']';               funcs[cnt]=pop->p;   %            cout<<pop->op_name<<endl;   !            pop=pop->next;                  }while (pop);           cout<<"[0]Exit"<<endl;   #        int chosen=getinput(0,cnt);   *        cout<<"you choose "<<chosen<<endl;           if (chosen==0)               return 0;           else{               funcs[chosen]();   	        }       }   }   int initializeDsp(){5�_�   $           &   %           ����                                                                                                                                                                                                                                                                                                                                                             XϾ�     �              5��