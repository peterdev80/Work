﻿using System;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Linq;

using System.Text;
using System.Windows.Threading;
using fmslapi;
using fmslapi.Channel;
using System.IO;
using PatchMnemoLib.ViewModel;
using ValueModel.BaseModel;
using System.Windows;

namespace WPFMnemoLibrary.Model
{
    public class LinkInpu

    {
        const int LINVAR = 28;

        private static volatile LinkInpu instance;
        //private readonly SyncChannel _rcvchannel;
        private readonly IChannel _chan;
        private readonly DispatcherTimer _dt;
        public static LinkInpu Instance
        {
            get
            {
                if (instance == null)
                    instance = new LinkInpu();

                return instance;
            }
        }



        public LinkInpu()
        {
          
            var m = Manager.GetAPI("VirtMnemo", new Guid("{2F28CEAF-6867-4396-81C8-5A937B4B74CC}"));

            _chan = m.JoinChannel("IO_MNEMO", null);
            _chan.SyncReceive = true;


            _dt = new DispatcherTimer(TimeSpan.FromMilliseconds(50), DispatcherPriority.Normal, OnTimer, Dispatcher.CurrentDispatcher);
            _dt.Start();
        }
        /// <summary>
        /// 
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void OnTimer(object sender, EventArgs e)
        {
            ISenderChannel sc;
            ReceivedMessage rm;

            while (_chan.Receive(out sc, out rm))
            {
                //  var b = new UInt32[LINVAR];
                var rd = new BinaryReader(new MemoryStream(rm.Data));
                if (rd.ReadUInt32() != 2500)
                    break;

                //чтение и запиь сразу
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__UKDU_1").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__UKDU_2").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__MNEMO_RES_4").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__MNEMO_RES_6").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__UKDU_3").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__SEP_1").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__SEP_2").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__SEP_3").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__SEP_5").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__SEP_6").VarM).VaRStatefloat = rd.ReadSingle();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__SEP_7").VarM).VaRStatefloat = rd.ReadSingle();
                rd.ReadUInt32();
                rd.ReadUInt32();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__SEP_10").VarM).VaRStatefloat = rd.ReadSingle();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__SOTR_1").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__SOTR_2").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__SOTR_3").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__SOTR_4").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__MNEMO_RES_5").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__SOTR_5").VarM).VarBitInt = (Int32)rd.ReadUInt32(); //dob for serg
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__SOTR_6").VarM).VaRStatefloat = rd.ReadSingle();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__SOTR_7").VarM).VaRStatefloat = rd.ReadSingle();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__SOTR_8").VarM).VaRStatefloat = rd.ReadSingle();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__SOTR_9").VarM).VaRStatefloat = rd.ReadSingle();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__SOTR_10").VarM).VaRStatefloat = rd.ReadSingle();
                rd.ReadUInt32();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__SOTR_12").VarM).VaRStatefloat = rd.ReadSingle();
                rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__KDU_1").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__KDU_2").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__KDU_3").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__KDU_4").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__KDU_5").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__MNEMO_RES_51").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__KDU_7").VarM).VaRStatefloat = rd.ReadSingle();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__KDU_8").VarM).VaRStatefloat = rd.ReadSingle();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__KDU_15").VarM).VaRStatefloat = rd.ReadSingle();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__KDU_16").VarM).VaRStatefloat = rd.ReadSingle();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__KDU_17").VarM).VaRStatefloat = rd.ReadSingle();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__KDU_18").VarM).VaRStatefloat = rd.ReadSingle();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__KDU_9").VarM).VaRStatefloat = rd.ReadSingle();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__KDU_10").VarM).VaRStatefloat = rd.ReadSingle();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__KDU_13").VarM).VaRStatefloat = rd.ReadSingle();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__KDU_14").VarM).VaRStatefloat = rd.ReadSingle();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__KDU_11").VarM).VaRStatefloat = rd.ReadSingle();
                ((FloatVar)ViewModelVariableList.Instance.GetVariable("__KDU_12").VarM).VaRStatefloat = rd.ReadSingle();
                //переменные мнемосхем
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__KDU_MS1").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                //отвод подвод
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__PTVOD_PODVOD_1").VarM).VarBitInt = (Int32)rd.ReadUInt32();
                ((BitIntVar)ViewModelVariableList.Instance.GetVariable("__PTVOD_PODVOD_2").VarM).VarBitInt = (Int32)rd.ReadUInt32();

            }
        }
    }
}

