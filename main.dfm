object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 268
  ClientWidth = 606
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 40
    Top = 192
    Width = 31
    Height = 13
    Caption = 'Label1'
  end
  object DateTimePicker1: TDateTimePicker
    Left = 401
    Top = 8
    Width = 186
    Height = 21
    Date = 41822.934274861110000000
    Time = 41822.934274861110000000
    TabOrder = 0
  end
  object Button1: TButton
    Left = 523
    Top = 235
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 1
    OnClick = Button1Click
  end
  object ComboBox1: TComboBox
    Left = 8
    Top = 8
    Width = 145
    Height = 21
    TabOrder = 2
    Text = 'Select Airport'
  end
end
