
ForceRoket
{
type forces;
functionObjectLibs ("libforces.so"); //Lib to load
patches (coneCylinder nozzle); // change to your patch name
// Name of fields
pName p;
Uname U;
// Dump to file
log true;
rho rhoInf;
rhoInf 1.125; //Reference density for fluid
CofR (0 0 0); //Origin for moment calculations
outputControl timeStep;
outputInterval 1;
}



CoeffsKobraCxmz
{
type forceCoeffs;
functionObjectLibs ("libforces.so");
patches (coneCylinder nozzle); //change to your patch name
// Name of fields
pName p;
Uname U;
// Dump to file
log true;
rho rhoInf;
rhoInf 1.225;
CofR (0 0 0);
liftDir (0 1 0);
dragDir (1 0 0);
pitchAxis (0 0 1);
magUInf 600;
lRef 2.9;
Aref 0.0216;
outputControl timeStep;
outputInterval 1;
}

CoeffsKobraCzCxmy
{
type forceCoeffs;
functionObjectLibs ("libforces.so");
patches (coneCylinder nozzle); //change to your patch name
// Name of fields
pName p;
Uname U;
// Dump to file
log true;
rho rhoInf;
rhoInf 1.225;
CofR (0 0 0);
liftDir (0 0 1);
dragDir (1 0 0);
pitchAxis (0 1 0);
magUInf 600;
lRef 2.9;
Aref 0.0216;
outputControl timeStep;
outputInterval 1;
}
