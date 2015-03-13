#ifndef OutputReportPredefined_hh_INCLUDED
#define OutputReportPredefined_hh_INCLUDED

// ObjexxFCL Headers
#include <ObjexxFCL/FArray1D.hh>
#include <ObjexxFCL/Optional.hh>

// EnergyPlus Headers
#include <EnergyPlus.hh>
#include <DataGlobals.hh>

namespace EnergyPlus {

namespace OutputReportPredefined {

	// Using/Aliasing

	// Data
	// The following section initializes the predefined column heading variables
	// The variables get their value in AssignPredefined

	// Climate Summary Report
	extern int pdrClim;
	extern int pdstDesDay;
	extern int pdchDDmaxDB;
	extern int pdchDDrange;
	extern int pdchDDhumid;
	extern int pdchDDhumTyp;
	extern int pdchDDwindSp;
	extern int pdchDDwindDr;
	extern int pdstWthr;
	extern int pdchWthrVal;

	// HVAC Equipment Report
	extern int pdrEquip;
	extern int pdstMech;
	extern int pdchMechType;
	extern int pdchMechNomCap;
	extern int pdchMechNomEff;
	extern int pdchMechIPLVSI;
	extern int pdchMechIPLVIP;
	// Fan subtable
	extern int pdstFan;
	extern int pdchFanType;
	extern int pdchFanTotEff;
	extern int pdchFanDeltaP;
	extern int pdchFanVolFlow;
	extern int pdchFanMotorIn;
	extern int pdchFanEndUse;
	extern int pdchFanPwr;
	extern int pdchFanPwrPerFlow;
	// Pump subtable
	extern int pdstPump;
	extern int pdchPumpType;
	extern int pdchPumpControl;
	extern int pdchPumpHead;
	extern int pdchPumpFlow;
	extern int pdchPumpPower;
	extern int pdchPumpPwrPerFlow;
	extern int pdchMotEff;
	// Cooling coil subtable
	extern int pdstCoolCoil;
	extern int pdchCoolCoilType;
	extern int pdchCoolCoilDesCap;
	extern int pdchCoolCoilTotCap;
	extern int pdchCoolCoilSensCap;
	extern int pdchCoolCoilLatCap;
	extern int pdchCoolCoilSHR;
	extern int pdchCoolCoilNomEff;
	extern int pdchCoolCoilUATotal;
	extern int pdchCoolCoilArea;

	// DX Cooling Coil subtable
	extern int pdstDXCoolCoil;
	extern int pdchDXCoolCoilType; // DX cooling coil type

	extern int pdchDXCoolCoilNetCapSI; // Standard Rated (Net) Cooling Capacity [W]
	extern int pdchDXCoolCoilCOP; // EER/COP value in SI unit at AHRI std. 340/360 conditions [W/W]
	extern int pdchDXCoolCoilSEERIP; // SEER value in IP unit at AHRI std. 210/240 conditions [Btu/W-hr]
	extern int pdchDXCoolCoilEERIP; // EER value in IP unit at AHRI std. 340/360 conditions [Btu/W-h]
	extern int pdchDXCoolCoilIEERIP; // IEER value in IP unit at AHRI std. 340/360 conditions

	// DX Cooling Coil subtable per ANSI/ASHRAE Std 127 for Tests A, B, C and D
	extern int pdstDXCoolCoil2;
	extern int pdchDXCoolCoilNetCapSIA; // Standard Rated (Net) Cooling Capacity [W], Test A
	extern int pdchDXCoolCoilElecPowerA; // Standard Rated Electric Power [W], Test A
	extern int pdchDXCoolCoilNetCapSIB; // Standard Rated (Net) Cooling Capacity [W], Test B
	extern int pdchDXCoolCoilElecPowerB; // Standard Rated Electric Power [W], Test B
	extern int pdchDXCoolCoilNetCapSIC; // Standard Rated (Net) Cooling Capacity [W], Test C
	extern int pdchDXCoolCoilElecPowerC; // Standard Rated Electric Power [W], Test C
	extern int pdchDXCoolCoilNetCapSID; // Standard Rated (Net) Cooling Capacity [W], Test D
	extern int pdchDXCoolCoilElecPowerD; // Standard Rated Electric Power [W], Test D

	// VAV DX Cooling Ratings Details
	extern int pdstVAVDXCoolCoil; // details for Packaged VAV rating under AHRI 340/360
	extern int pdchVAVDXCoolCoilType;
	extern int pdchVAVDXFanName;
	extern int pdchVAVDXCoolCoilNetCapSI;
	extern int pdchVAVDXCoolCoilCOP;
	extern int pdchVAVDXCoolCoilIEERIP;
	extern int pdchVAVDXCoolCoilEERIP;
	extern int pdchVAVDXCoolCoilMdotA;
	extern int pdchVAVDXCoolCoilCOP_B;
	extern int pdchVAVDXCoolCoilEER_B_IP;
	extern int pdchVAVDXCoolCoilMdotB;
	extern int pdchVAVDXCoolCoilCOP_C;
	extern int pdchVAVDXCoolCoilEER_C_IP;
	extern int pdchVAVDXCoolCoilMdotC;
	extern int pdchVAVDXCoolCoilCOP_D;
	extern int pdchVAVDXCoolCoilEER_D_IP;
	extern int pdchVAVDXCoolCoilMdotD;

	// DX Heating Coil subtable
	extern int pdstDXHeatCoil;
	extern int pdchDXHeatCoilType; // DX Heating coil type
	extern int pdchDXHeatCoilHighCap;
	extern int pdchDXHeatCoilLowCap;
	extern int pdchDXHeatCoilHSPFSI; // HSPF value in SI unit at AHRI std. 340/360 conditions [W/W]
	extern int pdchDXHeatCoilHSPFIP; // HSPF value in IP unit at AHRI std. 340/360 conditions [Btu/W-hr]
	extern int pdchDXHeatCoilRegionNum; // Region number for which HSPF is calculated

	// Heating Coil subtable
	extern int pdstHeatCoil;
	extern int pdchHeatCoilType;
	extern int pdchHeatCoilDesCap;
	extern int pdchHeatCoilNomCap;
	extern int pdchHeatCoilNomEff;
	// SWH subtable
	extern int pdstSWH;
	extern int pdchSWHType;
	extern int pdchSWHVol;
	extern int pdchSWHHeatIn;
	extern int pdchSWHThEff;
	extern int pdchSWHRecEff;
	extern int pdchSWHEnFac;

	// Envelope Report
	extern int pdrEnvelope;
	extern int pdstOpaque;
	extern int pdchOpCons;
	extern int pdchOpRefl;
	extern int pdchOpUfactFilm;
	extern int pdchOpUfactNoFilm;
	extern int pdchOpGrArea;
	extern int pdchOpAzimuth;
	extern int pdchOpTilt;
	extern int pdchOpDir;
	extern int pdstFen;
	extern int pdchFenCons;
	extern int pdchFenAreaOf1;
	extern int pdchFenGlassAreaOf1;
	extern int pdchFenFrameAreaOf1;
	extern int pdchFenDividerAreaOf1;
	extern int pdchFenArea;
	extern int pdchFenUfact;
	extern int pdchFenSHGC;
	extern int pdchFenVisTr;
	extern int pdchFenFrameConductance;
	extern int pdchFenDividerConductance;
	extern int pdchFenSwitchable;
	extern int pdchFenParent;
	extern int pdchFenAzimuth;
	extern int pdchFenTilt;
	extern int pdchFenDir;
	extern int pdstDoor;
	extern int pdchDrCons;
	extern int pdchDrUfactFilm;
	extern int pdchDrUfactNoFilm;
	extern int pdchDrGrArea;
	extern int pdchDrParent;
	extern int pdstIntFen;
	extern int pdchIntFenCons;
	extern int pdchIntFenAreaOf1;
	// Include these if interzone windows ever get frame and dividers
	//INTEGER :: pdchIntFenGlassAreaOf1
	//INTEGER :: pdchIntFenFrameAreaOf1
	//INTEGER :: pdchIntFenDividerAreaOf1
	//INTEGER :: pdchIntFenFrameConductance
	//INTEGER :: pdchIntFenDividerConductance
	extern int pdchIntFenArea;
	extern int pdchIntFenUfact;
	extern int pdchIntFenSHGC;
	extern int pdchIntFenVisTr;
	extern int pdchIntFenParent;

	// Shading Report
	extern int pdrShading;
	extern int pdstSunlitFrac;
	extern int pdchSlfMar21_9;
	extern int pdchSlfMar21_12;
	extern int pdchSlfMar21_15;
	extern int pdchSlfJun21_9;
	extern int pdchSlfJun21_12;
	extern int pdchSlfJun21_15;
	extern int pdchSlfDec21_9;
	extern int pdchSlfDec21_12;
	extern int pdchSlfDec21_15;
	extern int pdstWindowControl;
	extern int pdchWscName;
	extern int pdchWscShading;
	extern int pdchWscShadCons;
	extern int pdchWscControl;
	extern int pdchWscGlare;

	// Lighting Report
	extern int pdrLighting;
	extern int pdstInLite;
	extern int pdchInLtZone;
	extern int pdchInLtDens;
	extern int pdchInLtArea;
	extern int pdchInLtPower;
	extern int pdchInLtEndUse;
	extern int pdchInLtSchd;
	extern int pdchInLtAvgHrSchd;
	extern int pdchInLtAvgHrOper;
	extern int pdchInLtFullLoadHrs;
	extern int pdchInLtRetAir;
	extern int pdchInLtCond;
	extern int pdchInLtConsump;
	extern int pdstExtLite;
	extern int pdchExLtPower;
	extern int pdchExLtClock;
	extern int pdchExLtSchd;
	extern int pdchExLtAvgHrSchd;
	extern int pdchExLtAvgHrOper;
	extern int pdchExLtFullLoadHrs;
	extern int pdchExLtConsump;
	extern int pdstDaylight;
	extern int pdchDyLtZone;
	extern int pdchDyLtKind;
	extern int pdchDyLtCtrl;
	extern int pdchDyLtFrac;
	extern int pdchDyLtWInst;
	extern int pdchDyLtWCtrl;

	// Sizing Report
	extern int pdrSizing;
	extern int pdstZoneClSize;
	extern int pdchZnClCalcDesLd;
	extern int pdchZnClUserDesLd;
	extern int pdchZnClUserDesLdPerArea;
	extern int pdchZnClCalcDesAirFlow;
	extern int pdchZnClUserDesAirFlow;
	extern int pdchZnClDesDay;
	extern int pdchZnClPkTime;
	extern int pdchZnClPkTstatTemp;
	extern int pdchZnClPkIndTemp;
	extern int pdchZnClPkIndHum;
	extern int pdchZnClPkOATemp;
	extern int pdchZnClPkOAHum;
	extern int pdstZoneHtSize;
	extern int pdchZnHtCalcDesLd;
	extern int pdchZnHtUserDesLd;
	extern int pdchZnHtUserDesLdPerArea;
	extern int pdchZnHtCalcDesAirFlow;
	extern int pdchZnHtUserDesAirFlow;
	extern int pdchZnHtDesDay;
	extern int pdchZnHtPkTime;
	extern int pdchZnHtPkTstatTemp;
	extern int pdchZnHtPkIndTemp;
	extern int pdchZnHtPkIndHum;
	extern int pdchZnHtPkOATemp;
	extern int pdchZnHtPkOAHum;
	extern int pdstSystemSize;
	extern int pdchSysSizCalcClAir;
	extern int pdchSysSizUserClAir;
	extern int pdchSysSizCalcHtAir;
	extern int pdchSysSizUserHtAir;

	//System summary
	extern int pdrSystem;
	extern int pdstEconomizer;
	extern int pdchEcoKind;
	extern int pdchEcoMinOA;
	extern int pdchEcoMaxOA;
	extern int pdchEcoRetTemp;
	extern int pdchEcoRetEnth;
	extern int pdchEcoOATempLim;
	extern int pdchEcoOAEnthLim;
	extern int pdstDemCntlVent;
	extern int pdchDCVventMechName;
	extern int pdchDCVperPerson;
	extern int pdchDCVperArea;

	//added for new DCV
	extern int pdchDCVZoneADEffCooling;
	extern int pdchDCVZoneADEffHeating;
	extern int pdchDCVZoneADEffSchName;

	extern int pdstSimpleComfort;
	extern int pdchSCwinterClothes;
	extern int pdchSCsummerClothes;
	extern int pdchSCeitherClothes;
	extern int pdstUnmetLoads;
	extern int pdchULnotMetHeat;
	extern int pdchULnotMetCool;
	extern int pdchULnotMetHeatOcc;
	extern int pdchULnotMetCoolOcc;

	// Outside Air Report
	extern int pdrOutsideAir;
	extern int pdstOAavgOcc;
	extern int pdchOaoAvgNumOcc1;
	extern int pdchOaoNomNumOcc1;
	extern int pdchOaoZoneVol1;
	extern int pdchOaoAvgMechVent;
	extern int pdchOaoAvgInfil;
	extern int pdchOaoAvgAFNInfil;
	extern int pdchOaoAvgSimpVent;
	extern int pdchOaoAvgTotVent;
	extern int pdstOAminOcc;
	extern int pdchOaoAvgNumOcc2;
	extern int pdchOaoNomNumOcc2;
	extern int pdchOaoZoneVol2;
	extern int pdchOaoMinMechVent;
	extern int pdchOaoMinInfil;
	extern int pdchOaoMinAFNInfil;
	extern int pdchOaoMinSimpVent;
	extern int pdchOaoMinTotVent;

	// Object Count Report
	extern int pdrObjCnt;
	extern int pdstSurfCnt;
	extern int pdchSurfCntTot;
	extern int pdchSurfCntExt;
	extern int pdstHVACcnt;
	extern int pdchHVACcntVal;
	extern int pdstFieldCnt;
	extern int pdchFieldCntVal;

	// Energy Meters Report
	extern int pdrEnergyMeters;

	extern int pdstEMelecvalues;
	extern int pdchEMelecannual;
	extern int pdchEMelecminvalue;
	extern int pdchEMelecminvaluetime;
	extern int pdchEMelecmaxvalue;
	extern int pdchEMelecmaxvaluetime;

	extern int pdstEMgasvalues;
	extern int pdchEMgasannual;
	extern int pdchEMgasminvalue;
	extern int pdchEMgasminvaluetime;
	extern int pdchEMgasmaxvalue;
	extern int pdchEMgasmaxvaluetime;

	extern int pdstEMcoolvalues;
	extern int pdchEMcoolannual;
	extern int pdchEMcoolminvalue;
	extern int pdchEMcoolminvaluetime;
	extern int pdchEMcoolmaxvalue;
	extern int pdchEMcoolmaxvaluetime;

	extern int pdstEMwatervalues;
	extern int pdchEMwaterannual;
	extern int pdchEMwaterminvalue;
	extern int pdchEMwaterminvaluetime;
	extern int pdchEMwatermaxvalue;
	extern int pdchEMwatermaxvaluetime;

	extern int pdstEMotherJvalues;
	extern int pdchEMotherJannual;
	extern int pdchEMotherJminvalue;
	extern int pdchEMotherJminvaluetime;
	extern int pdchEMotherJmaxvalue;
	extern int pdchEMotherJmaxvaluetime;

	extern int pdstEMotherKGvalues;
	extern int pdchEMotherKGannual;
	extern int pdchEMotherKGminvalue;
	extern int pdchEMotherKGminvaluetime;
	extern int pdchEMotherKGmaxvalue;
	extern int pdchEMotherKGmaxvaluetime;

	extern int pdstEMotherM3values;
	extern int pdchEMotherM3annual;
	extern int pdchEMotherM3minvalue;
	extern int pdchEMotherM3minvaluetime;
	extern int pdchEMotherM3maxvalue;
	extern int pdchEMotherM3maxvaluetime;

	extern int pdstEMotherLvalues;
	extern int pdchEMotherLannual;
	extern int pdchEMotherLminvalue;
	extern int pdchEMotherLminvaluetime;
	extern int pdchEMotherLmaxvalue;
	extern int pdchEMotherLmaxvaluetime;

	// Sensible Heat Gas Component Report
	extern int pdrSensibleGain;
	//annual
	extern int pdstSHGSannual;
	extern int pdchSHGSAnHvacHt;
	extern int pdchSHGSAnHvacCl;
	extern int pdchSHGSAnSurfHt;
	extern int pdchSHGSAnSurfCl;
	extern int pdchSHGSAnPeoplAdd;
	extern int pdchSHGSAnLiteAdd;
	extern int pdchSHGSAnEquipAdd;
	extern int pdchSHGSAnWindAdd;
	extern int pdchSHGSAnIzaAdd;
	extern int pdchSHGSAnInfilAdd;
	extern int pdchSHGSAnOtherAdd;
	extern int pdchSHGSAnEquipRem;
	extern int pdchSHGSAnWindRem;
	extern int pdchSHGSAnIzaRem;
	extern int pdchSHGSAnInfilRem;
	extern int pdchSHGSAnOtherRem;
	//peak cooling
	extern int pdstSHGSpkCl;
	extern int pdchSHGSClTimePeak;
	extern int pdchSHGSClHvacHt;
	extern int pdchSHGSClHvacCl;
	extern int pdchSHGSClSurfHt;
	extern int pdchSHGSClSurfCl;
	extern int pdchSHGSClPeoplAdd;
	extern int pdchSHGSClLiteAdd;
	extern int pdchSHGSClEquipAdd;
	extern int pdchSHGSClWindAdd;
	extern int pdchSHGSClIzaAdd;
	extern int pdchSHGSClInfilAdd;
	extern int pdchSHGSClOtherAdd;
	extern int pdchSHGSClEquipRem;
	extern int pdchSHGSClWindRem;
	extern int pdchSHGSClIzaRem;
	extern int pdchSHGSClInfilRem;
	extern int pdchSHGSClOtherRem;
	//peak heating
	extern int pdstSHGSpkHt;
	extern int pdchSHGSHtTimePeak;
	extern int pdchSHGSHtHvacHt;
	extern int pdchSHGSHtHvacCl;
	extern int pdchSHGSHtSurfHt;
	extern int pdchSHGSHtSurfCl;
	extern int pdchSHGSHtPeoplAdd;
	extern int pdchSHGSHtLiteAdd;
	extern int pdchSHGSHtEquipAdd;
	extern int pdchSHGSHtWindAdd;
	extern int pdchSHGSHtIzaAdd;
	extern int pdchSHGSHtInfilAdd;
	extern int pdchSHGSHtOtherAdd;
	extern int pdchSHGSHtEquipRem;
	extern int pdchSHGSHtWindRem;
	extern int pdchSHGSHtIzaRem;
	extern int pdchSHGSHtInfilRem;
	extern int pdchSHGSHtOtherRem;
	//Standard62Report
	extern int pdrStd62;
	extern int pdstS62sysVentReqCool;
	extern int pdchS62svrClSumVpz;
	extern int pdchS62svrClPs;
	extern int pdchS62svrClSumPz;
	extern int pdchS62svrClD;
	extern int pdchS62svrClVou;
	extern int pdchS62svrClVps;
	extern int pdchS62svrClXs;
	extern int pdchS62svrClEv;
	extern int pdchS62svrClVot;
	extern int pdchS62svrClPercOA;

	extern int pdstS62sysVentReqHeat;
	extern int pdchS62svrHtSumVpz;
	extern int pdchS62svrHtPs;
	extern int pdchS62svrHtSumPz;
	extern int pdchS62svrHtD;
	extern int pdchS62svrHtVou;
	extern int pdchS62svrHtVps;
	extern int pdchS62svrHtXs;
	extern int pdchS62svrHtEv;
	extern int pdchS62svrHtVot;
	extern int pdchS62svrHtPercOA;

	extern int pdstS62znVentPar;
	extern int pdchS62zvpAlN;
	extern int pdchS62zvpRp;
	extern int pdchS62zvpPz;
	extern int pdchS62zvpRa;
	extern int pdchS62zvpAz;
	extern int pdchS62zvpVbz;
	extern int pdchS62zvpClEz;
	extern int pdchS62zvpClVoz;
	extern int pdchS62zvpHtEz;
	extern int pdchS62zvpHtVoz;

	extern int pdstS62sysVentPar;
	extern int pdchS62svpRp;
	extern int pdchS62svpPz;
	extern int pdchS62svpRa;
	extern int pdchS62svpAz;
	extern int pdchS62svpVbz;
	extern int pdchS62svpClVoz;
	extern int pdchS62svpHtVoz;

	extern int pdstS62znCoolDes;
	extern int pdchS62zcdAlN;
	extern int pdchS62zcdBox;
	extern int pdchS62zcdVpz;
	extern int pdchS62zcdVps;
	extern int pdchS62zcdVsec;
	extern int pdchS62zcdVdz;
	extern int pdchS62zcdVpzmin;
	extern int pdchS62zcdVozclg;
	extern int pdchS62zcdZpz;
	extern int pdchS62zcdEp;
	extern int pdchS62zcdEr;
	extern int pdchS62zcdFa;
	extern int pdchS62zcdFb;
	extern int pdchS62zcdFc;
	extern int pdchS62zcdEvz;

	extern int pdstS62sysCoolDes;
	extern int pdchS62scdVpz;
	extern int pdchS62scdVps;
	extern int pdchS62scdVsec;
	extern int pdchS62scdVdz;
	extern int pdchS62scdVpzmin;
	extern int pdchS62scdVozclg;
	extern int pdchS62scdEvz;

	extern int pdstS62znHeatDes;
	extern int pdchS62zhdAlN;
	extern int pdchS62zhdBox;
	extern int pdchS62zhdVpz;
	extern int pdchS62zhdVps;
	extern int pdchS62zhdVsec;
	extern int pdchS62zhdVdz;
	extern int pdchS62zhdVpzmin;
	extern int pdchS62zhdVozhtg;
	extern int pdchS62zhdZpz;
	extern int pdchS62zhdEp;
	extern int pdchS62zhdEr;
	extern int pdchS62zhdFa;
	extern int pdchS62zhdFb;
	extern int pdchS62zhdFc;
	extern int pdchS62zhdEvz;

	extern int pdstS62sysHeatDes;
	extern int pdchS62shdVpz;
	extern int pdchS62shdVps;
	extern int pdchS62shdVsec;
	extern int pdchS62shdVdz;
	extern int pdchS62shdVpzmin;
	extern int pdchS62shdVozhtg;
	extern int pdchS62shdEvz;

	//  LEED Summary
	extern int pdrLeed;
	extern int pdstLeedGenInfo;
	extern int pdchLeedGenData;

	extern int pdstLeedSpaceUsageType;
	extern int pdchLeedSutName;
	extern int pdchLeedSutSpArea;
	extern int pdchLeedSutOcArea;
	extern int pdchLeedSutUnArea;
	extern int pdchLeedSutHrsWeek;

	extern int pdstLeedAdvsMsg;
	extern int pdchLeedAmData;

	extern int pdstLeedEneTypSum;
	extern int pdchLeedEtsType;
	extern int pdchLeedEtsRtNm;
	extern int pdchLeedEtsVirt;
	extern int pdchLeedEtsEneUnt;
	extern int pdchLeedEtsDemUnt;

	extern int pdstLeedPerf;
	extern int pdchLeedPerfRot;
	extern int pdchLeedPerfElEneUse;
	extern int pdchLeedPerfElDem;
	extern int pdchLeedPerfGasEneUse;
	extern int pdchLeedPerfGasDem;
	extern int pdchLeedPerfOthEneUse;
	extern int pdchLeedPerfOthDem;

	extern int pdstLeedEneUseSum;
	extern int pdchLeedEusUnt;
	extern int pdchLeedEusProc;
	extern int pdchLeedEusTotal;

	extern int pdstLeedEneCostSum;
	extern int pdchLeedEcUnt;
	extern int pdchLeedEcsProc;
	extern int pdchLeedEcsTotal;
	extern Real64 LEEDelecCostTotal;
	extern Real64 LEEDgasCostTotal;
	extern Real64 LEEDothrCostTotal;

	extern int pdstLeedRenewSum;
	extern int pdchLeedRenRatCap;
	extern int pdchLeedRenAnGen;

	extern int pdstLeedEneUseIntEl;
	extern int pdchLeedEuiElec;
	extern int pdstLeedEneUseIntNatG;
	extern int pdchLeedEuiNatG;
	extern int pdstLeedEneUseIntOthr;
	extern int pdchLeedEuiOthr;

	extern int pdstLeedEneUsePerc;
	extern int pdchLeedEupPerc;

	// Internal data structures to store information provided by calls

	extern int const sizeIncrement;

	extern int sizeReportName;
	extern int numReportName;

	extern int sizeSubTable;
	extern int numSubTable;

	extern int sizeColumnTag;
	extern int numColumnTag;

	extern int sizeTableEntry;
	extern int numTableEntry;

	extern int sizeCompSizeTableEntry;
	extern int numCompSizeTableEntry;

	extern int sizeShadowRelate;
	extern int numShadowRelate;
	extern int const recKindSurface;
	extern int const recKindSubsurface;

	extern Real64 TotalNotMetHeatingOccupiedForABUPS;
	extern Real64 TotalNotMetCoolingOccupiedForABUPS;
	extern Real64 TotalNotMetOccupiedForABUPS;
	extern Real64 TotalTimeNotSimpleASH55EitherForABUPS;

	// Types

	struct reportNameType
	{
		// Members
		std::string name;
		std::string namewithspaces; // a "prettier version" than the key value
		std::string abrev;
		bool show;

		// Default Constructor
		reportNameType() :
			show( false )
		{}

		// Member Constructor
		reportNameType(
			std::string const & name,
			std::string const & namewithspaces, // a "prettier version" than the key value
			std::string const & abrev,
			bool const show
		) :
			name( name ),
			namewithspaces( namewithspaces ),
			abrev( abrev ),
			show( show )
		{}

	};

	struct SubTableType
	{
		// Members
		std::string name;
		int indexReportName;
		std::string footnote;

		// Default Constructor
		SubTableType() :
			indexReportName( 0 )
		{}

		// Member Constructor
		SubTableType(
			std::string const & name,
			int const indexReportName,
			std::string const & footnote
		) :
			name( name ),
			indexReportName( indexReportName ),
			footnote( footnote )
		{}

	};

	struct ColumnTagType
	{
		// Members
		std::string heading;
		int indexSubTable;

		// Default Constructor
		ColumnTagType() :
			indexSubTable( 0 )
		{}

		// Member Constructor
		ColumnTagType(
			std::string const & heading,
			int const indexSubTable
		) :
			heading( heading ),
			indexSubTable( indexSubTable )
		{}

	};

	struct TableEntryType
	{
		// Members
		std::string charEntry;
		std::string objectName;
		int indexColumn;
		int subTableIndex;
		int uniqueObjName;
		Real64 origRealEntry;
		int significantDigits;
		bool origEntryIsReal;

		// Default Constructor
		TableEntryType() :
			indexColumn( 0 ),
			subTableIndex( 0 ),
			uniqueObjName( 0 ),
			origRealEntry( 0.0 ),
			significantDigits( 0 ),
			origEntryIsReal( false )
		{}

		// Member Constructor
		TableEntryType(
			std::string const & charEntry,
			std::string const & objectName,
			int const indexColumn,
			int const subTableIndex,
			int const uniqueObjName,
			Real64 const origRealEntry,
			int const significantDigits,
			bool const origEntryIsReal
		) :
			charEntry( charEntry ),
			objectName( objectName ),
			indexColumn( indexColumn ),
			subTableIndex( subTableIndex ),
			uniqueObjName( uniqueObjName ),
			origRealEntry( origRealEntry ),
			significantDigits( significantDigits ),
			origEntryIsReal( origEntryIsReal )
		{}

	};

	struct CompSizeTableEntryType
	{
		// Members
		std::string typeField;
		std::string nameField;
		std::string description;
		Real64 valField;
		bool active;
		bool written;

		// Default Constructor
		CompSizeTableEntryType() :
			valField( 0.0 ),
			active( false ),
			written( false )
		{}

		// Member Constructor
		CompSizeTableEntryType(
			std::string const & typeField,
			std::string const & nameField,
			std::string const & description,
			Real64 const valField,
			bool const active,
			bool const written
		) :
			typeField( typeField ),
			nameField( nameField ),
			description( description ),
			valField( valField ),
			active( active ),
			written( written )
		{}

	};

	struct ShadowRelateType
	{
		// Members
		//  CHARACTER(len=MaxNameLength)  :: castSurf          = ''
		//  CHARACTER(len=MaxNameLength)  :: recSurf           = ''
		int castSurf;
		int recSurf;
		int recKind;

		// Default Constructor
		ShadowRelateType() :
			castSurf( 0 ),
			recSurf( 0 ),
			recKind( 0 )
		{}

		// Member Constructor
		ShadowRelateType(
			int const castSurf,
			int const recSurf,
			int const recKind
		) :
			castSurf( castSurf ),
			recSurf( recSurf ),
			recKind( recKind )
		{}

	};

	// Object Data
	extern FArray1D< reportNameType > reportName;
	extern FArray1D< SubTableType > subTable;
	extern FArray1D< ColumnTagType > columnTag;
	extern FArray1D< TableEntryType > tableEntry;
	extern FArray1D< CompSizeTableEntryType > CompSizeTableEntry;
	extern FArray1D< ShadowRelateType > ShadowRelate;

	// Functions

	void
	SetPredefinedTables();

	void
	PreDefTableEntry(
		int const columnIndex,
		std::string const & objName,
		Real64 const tableEntryReal,
		Optional_int_const numSigDigits = _
	);

	void
	PreDefTableEntry(
		int const columnIndex,
		std::string const & objName,
		std::string const & tableEntryChar
	);

	void
	PreDefTableEntry(
		int const columnIndex,
		std::string const & objName,
		int const tableEntryInt
	);

	void
	incrementTableEntry();

	void
	AddCompSizeTableEntry(
		std::string const & FieldType,
		std::string const & FieldName,
		std::string const & FieldDescription,
		Real64 const FieldValue
	);

	void
	AddShadowRelateTableEntry(
		int const castingField,
		int const receivingField,
		int const receivingKind
	);

	int
	newPreDefReport(
		std::string const & inReportName,
		std::string const & inReportAbrev,
		std::string const & inReportNamewithSpaces
	);

	int
	newPreDefSubTable(
		int const reportIndex,
		std::string const & subTableName
	);

	void
	addFootNoteSubTable(
		int const subTableIndex,
		std::string const & footnoteText
	);

	int
	newPreDefColumn(
		int const subTableIndex,
		std::string const & columnHeading
	);

	//     NOTICE

	//     Copyright � 1996-2014 The Board of Trustees of the University of Illinois
	//     and The Regents of the University of California through Ernest Orlando Lawrence
	//     Berkeley National Laboratory.  All rights reserved.

	//     Portions of the EnergyPlus software package have been developed and copyrighted
	//     by other individuals, companies and institutions.  These portions have been
	//     incorporated into the EnergyPlus software package under license.   For a complete
	//     list of contributors, see "Notice" located in main.cc.

	//     NOTICE: The U.S. Government is granted for itself and others acting on its
	//     behalf a paid-up, nonexclusive, irrevocable, worldwide license in this data to
	//     reproduce, prepare derivative works, and perform publicly and display publicly.
	//     Beginning five (5) years after permission to assert copyright is granted,
	//     subject to two possible five year renewals, the U.S. Government is granted for
	//     itself and others acting on its behalf a paid-up, non-exclusive, irrevocable
	//     worldwide license in this data to reproduce, prepare derivative works,
	//     distribute copies to the public, perform publicly and display publicly, and to
	//     permit others to do so.

	//     TRADEMARKS: EnergyPlus is a trademark of the US Department of Energy.

} // OutputReportPredefined

} // EnergyPlus

#endif
