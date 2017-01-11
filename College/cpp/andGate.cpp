/*AND gates and OR gates are basic components used in building digital
circuits. Both gates have two input lines and one output line. The
output of an AND gate is 1 if both inputs are 1, otherwise the output
is 0. The output of an OR gate is 1 if at least one input is 1,
otherwise the output is 0. You are given a digital circuit composed of
only AND and OR gates where one node (gate or input) is specially
designated as the output. Furthermore, for any gate G and any input
node I, at most one of the inputs to G depends on the value of node I.
Now consider the following random experiment. Fix some probability p
in [0,1] and set each input bit to 1 independently at random with
probability p (and to 0 with probability 1-p). The output is then 1
with some probability that depends on p. You wonder what value of p
causes the circuit to output a 1 with probability 1/2.
ABHINAV GUPTA
2014-2018
*/
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
class circuit{
    private:
        int T,N,k=0;
        int type[1000],I[1000][2];
        double p[1000];
        vector<double>v1;
    public:
        void get(){
            cin>>T;
             while(T--){
                cin>>N;
                for(int i = 0;i<N;++i){
                    cin>>type[i];
                    if(type[i]!=0){
                        cin>>I[i][0]>>I[i][1];
                            --I[i][0];
                            --I[i][1];
                        }
                    }
                double eps = 1e-8,lo = 0,hi = 1,mi;
                for(int it = 0;it<30;++it){
                mi = (lo+hi)/2;
                for(int i = 0;i<N;++i){
                    if(type[i]==0)
                        p[i] = mi;
                    else if(type[i]==1)
                        p[i] = 1-(1-p[I[i][0]])*(1-p[I[i][1]]);
                    else
                        p[i] = p[I[i][0]]*p[I[i][1]];
                }
                if(p[N-1]>0.5-eps)
                    hi = mi;
                else
                    lo = mi;
                }
                v1.push_back(lo);
                }
        }
        void display(){
            for(int i=0;i<v1.size();i++)
            cout<<fixed<<setprecision(5)<<v1[i]<<endl;
        }

};
int main()
{
    circuit c1;
    c1.get();
    c1.display();
    return 0;
}