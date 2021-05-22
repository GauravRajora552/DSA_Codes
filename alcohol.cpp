#include<bits/stdc++.h>
using namespace std;
int main(){
    int Amount_of_alcohol=14
    float weight_men;
    cout<<"Enter the weight of men: ";
    cin>>weight_men;
    //Vol_of_fluid_in_men_blood=0.82*weight_men
    float Total_body_fluid=0.82* weight_men
    //Conc_of_alcohol_per_drink
    float C_s= (Amount_of_alcohol)/(10*Total_body_fluid)
    int n;
    cout<<("Number_of_glass_for_drinks:"))
    cin>>n;
    float c_o;
    c_o = n*C_s
    if c_o<0.05:
        print("Not Effect much but don't take it!! :)")
    if c_o>=0.05 or c_o<0.10:
        print("Dull and dignified")
    if c_o>=0.10 or c_o<0.15:
        print("Dangerous and devilish")
    if c_o>=0.15 or c_o<0.20:
        print("Dizzy")
    if c_o>=0.20 or c_o<0.25:
        print("Disturbing")
    if c_o>=0.25 or c_o<0.30:
        print("Disgusting and dishevelled")
    if c_o>=0.30 or c_o<0.35:
        print("Delirious and disoritnted")
    if c_o>=0.35 or c_o<0.40:
        print("Dead drunk")
    if c_o>=0.40:
        print("Dead!")
    print("BAL measure of men: ",c_o)

    def women():
    Amount_of_alcohol=14
    weight_women=float(input("Enter the weight of women: "))
    #Vol_of_fluid_in_women_blood=0.67*weight_women
    Total_body_fluid= 0.67*weight_women
    #conc_of_alcohol_per_drink
    C_s=(Amount_of_alcohol)/(10*Total_body_fluid)
    n=int(input("Number_of_glass_for_drinks:"))
    
    c_o = n*C_s
    if c_o<0.05:
        print("Not Effect much but don't take it!! :)")
    if c_o>=0.05 or c_o<0.10:
        print("Dull and dignified")
    if c_o>=0.10 or c_o<0.15:
        print("Dangerous and devilish")
    if c_o>=0.15 or c_o<0.20:
        print("Dizzy")
    if c_o>=0.20 or c_o<0.25:
        print("Disturbing")
    if c_o>=0.25 or c_o<0.30:
        print("Disgusting and dishevelled")
    if c_o>=0.30 or c_o<0.35:
        print("Delirious and disoritnted")
    if c_o>=0.35 or c_o<0.40:
        print("Dead drunk")
    if c_o>=0.40:
        print("Dead!")
    
    
    print("BAL measure of women: ",c_o)
    
    def alcohol():
    situation=input("""About_Stomach\n {Empty/Full}:""")
    gender=input("Enter the gender of a person: ")
    if situation=="Empty":
        if gender=="men":
        print(men())
        if gender=="women":
        print(women())
        
    if situation=="Full":
        if gender=="men":
        print(men())
        if gender=="women":
        print(women())
    
    
    
    """if gender=="men":
            return(men())
        if gender=="women":
            return(women())
    """
    
    
    "When Stomuch is empty with food or other liquid or containing meal"
    """
    Most of the alcohol is oxidised through the liver and excreted,
    while remainder leaves the body through the lungs,urine,saliva and sweet.
    unit of alcohol in a blood: BAL
    conc. of alcohol = total mass of alcohol in gram / total fluid in the body=(mg/ml or g/l).
    alcohol_conc.;
    men:47%,
    women:12%.

    Absolute alcohol content :14g,
    Beverage intake: 1 oz spirits or 1 glass wine, or 1 can beer,
    Number of glass intake n=1,
    therefore, 
    for 'n' number of glass;
    Alcohol content:(n*14)g

    c1(t)= conc. of alcohol in GI-tract at time t
    c2(t)= conc. of alcohol in the bloodstream at time t.
    diff eqn: 
            dc1/dt =I-k1c2.
            dc2/dt=k2c1-k3c2 /(c2+M).
            with constant k1,k2,M
            I=amount of alcohol measured in BAL/hours
            I=i/Vb
            i= ingestion rate of alcohol measured in units ofBAL/hour
            Vb=vol of fluid inthe blood,measured in 100ml
    """



    return 0;
}