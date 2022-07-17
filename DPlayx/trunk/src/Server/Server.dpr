program server;

uses
  Forms,
  main in 'main.pas' {fmMain},
  tasv in 'tasv.pas',
  packet_old in '..\packet_old.pas',
  textdata in '..\TextData.pas',
  lobby in 'lobby.pas',
  loading in 'loading.pas',
  savefile in 'savefile.pas',
  replay in 'replay.pas',
  unitsync in 'unitsync.pas',
  logging in '..\logging.pas',
  cstream in '..\cstream.pas',
  unitid in 'unitid.pas',
  textfileu in '..\textfileu.pas',
  gphugef in '..\3rdparty\gphugef.pas',
  tademoconsts in '..\Recorder\tademoconsts.pas',
  udebug in '..\udebug.pas',
  freelistu in '..\freelistu.pas',
  selip in 'selip.pas' {fmSelIP};

{$R *.RES}

begin
  Application.Initialize;
  Application.CreateForm(TfmMain, fmMain);
  Application.CreateForm(TfmSelIP, fmSelIP);
  Application.Run;
end.
