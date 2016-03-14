
    %% Load Train Database
    %% Load ref. point coordinates
    % filenameRefPointCoordinates: Ref. Point Coordinates data file name
    % pathnameRefPointCoordinates: Ref. Point Coordinates data path name
    [filenameRefPointCoordinates,pathnameRefPointCoordinates]=uigetfile({'*.csv'},'Ref. Point Coordinates File Selector');
    % testTmp_wifi_path: a file path name of Ref. Point Coordinates data for xlsread function
    refPointCoordinates_path=strcat(pathnameRefPointCoordinates,filenameRefPointCoordinates);
    refPointCoordinates=csvread(refPointCoordinates_path,1,0);

    % noRefPoints: number of Ref. Points
    noRefPoints=size(refPointCoordinates,1);

    %% Load train mf data
    % filenameTrainMF: train mf data file name
    % pathnameTrainMF: train mf data path name
    [filenameTrainMF,pathnameTrainMF]=uigetfile({'*.csv'},'MF Train File Selector','D:\RFKON_UB_SB\src\M6_Likelihood_MF_MeanTest_v1.0\datasets\MF');
    % trainTmp_mf_path: a file path name of mf train data for xlsread function
    trainTmp_mf_path=strcat(pathnameTrainMF,filenameTrainMF);
    temp_train_mf_data=csvread(trainTmp_mf_path,1,0);
    temp_train_mf=temp_train_mf_data(:,1:3);
    %% Construct train database that contain ref. point x, y coordinates, train WiFi mean values, 
    % train WiFi st. dev. values, train MF mean values, and train MF st. dev.
    % values
    DatabaseConstruction(refPointCoordinates,noRefPoints,temp_train_mf)
    %% Load constructed database for train data that contains ref. points coordinates,
    % mean and st. dev. of train WiFi RSS data, and mean and st. dev. of train MF data
    % filenameTrainDatabase: constructed train database file name
    % pathnameTrainDatabase: constructed train database path name
    [filenameTrainDatabase,pathnameTrainDatabase]=uigetfile({'*.csv'},'Database File Selector');
    % trainDatabase_path: a file path name of constructed train database for xlsread function
    trainDatabase_path=strcat(pathnameTrainDatabase,filenameTrainDatabase);
    database=csvread(trainDatabase_path,0,0);

    %% Load test mf data
    % filenameTestMF: test mf data fileame
    % pathnameTestMF: test mf data path name
    [filenameTestMF,pathnameTestMF]=uigetfile({'*.csv'},'MF Test File Selector','D:\RFKON_UB_SB\src\M6_Likelihood_MF_MeanTest_v1.0\datasets\MF');
    % testTmp_mf_path: a file path name of mf train data for xlsread function
    testTmp_mf_path=strcat(pathnameTestMF,filenameTestMF);
    testTmp_mf=csvread(testTmp_mf_path,1,0);
%     testTmp_mf=testTmp_mf_data(:,1:3);
    
    CalculateAccuracy_Sensor(testTmp_mf,database);

